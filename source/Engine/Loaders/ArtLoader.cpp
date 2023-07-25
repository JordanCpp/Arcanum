#include <Engine/Loaders/ArtLoader.hpp>

using namespace Engine::Graphics;
using namespace Engine::Loaders;
using namespace Engine::Readers;
using namespace Engine::Formats;

void ArtLoader::Load(FileReader* fileReader)
{
	_File.LoadArt(fileReader);
}

const Point& ArtLoader::getSize()
{
	return _Size;
}

const Point& ArtLoader::getOffset()
{
	return _Offset;
}

const Point& ArtLoader::getDelta()
{
	return _Delta;
}

uint8_t* ArtLoader::Pixels()
{
	return &_Pixels[0];
}

size_t ArtLoader::Frames()
{
	return _File.frame_data.size();
}

void ArtLoader::Frame(size_t index)
{
	size_t w = _File.frame_data[index].header.width;
	size_t h = _File.frame_data[index].header.height;
	_Size = Point(w, h);

	size_t ow = _File.frame_data[index].header.c_x;
	size_t oh = _File.frame_data[index].header.c_y;
	_Offset = Point(ow, oh);

	size_t dw = _File.frame_data[index].header.d_x;
	size_t dh = _File.frame_data[index].header.d_y;
	_Delta = Point(dw, dh);

	_Pixels.clear();
	_Pixels.resize(w * h * 4);

	for (size_t y = 0; y < h; y++)
	{
		for (size_t x = 0; x < w; x++)
		{
			size_t i = ((w * y) + x) * 4;

			ArtTable& table = _File.palette_data[0];

			uint8_t c = _File.frame_data[index].GetValue(x, y);

			uint8_t r = table.colors[c].r;
			uint8_t g = table.colors[c].g;
			uint8_t b = table.colors[c].b;

			if (c != 0)
			{
				_Pixels[i + 0] = r;
				_Pixels[i + 1] = g;
				_Pixels[i + 2] = b;
				_Pixels[i + 3] = 255;
			}
			else
			{
				_Pixels[index + 0] = 0;
				_Pixels[index + 1] = 0;
				_Pixels[index + 2] = 0;
				_Pixels[index + 3] = 0;
			}
		}
	}
}