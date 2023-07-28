#include <Arcanum/Loaders/ArtLoader.hpp>

using namespace arcanum::math;
using namespace arcanum::loaders;
using namespace arcanum::readers;
using namespace arcanum::formats;

void ArtLoader::Load(FileReader* fileReader)
{
	mFile.loadArt(fileReader);
}

const Point& ArtLoader::getSize()
{
	return mSize;
}

const Point& ArtLoader::getOffset()
{
	return mOffset;
}

const Point& ArtLoader::getDelta()
{
	return mDelta;
}

uint8_t* ArtLoader::getPixels()
{
	return &mPixels[0];
}

size_t ArtLoader::getFrames()
{
	return mFile.frame_data.size();
}

void ArtLoader::frame(size_t index)
{
	size_t w = mFile.frame_data[index].header.width;
	size_t h = mFile.frame_data[index].header.height;
	mSize = Point(w, h);

	size_t ow = mFile.frame_data[index].header.c_x;
	size_t oh = mFile.frame_data[index].header.c_y;
	mOffset = Point(ow, oh);

	size_t dw = mFile.frame_data[index].header.d_x;
	size_t dh = mFile.frame_data[index].header.d_y;
	mDelta = Point(dw, dh);

	mPixels.clear();
	mPixels.resize(w * h * 4);

	for (size_t y = 0; y < h; y++)
	{
		for (size_t x = 0; x < w; x++)
		{
			size_t i = ((w * y) + x) * 4;

			ArtTable& table = mFile.palette_data[0];

			uint8_t c = mFile.frame_data[index].getValue(x, y);

			uint8_t r = table.colors[c].r;
			uint8_t g = table.colors[c].g;
			uint8_t b = table.colors[c].b;

			if (c != 0)
			{
				mPixels[i + 0] = r;
				mPixels[i + 1] = g;
				mPixels[i + 2] = b;
				mPixels[i + 3] = 255;
			}
			else
			{
				mPixels[index + 0] = 0;
				mPixels[index + 1] = 0;
				mPixels[index + 2] = 0;
				mPixels[index + 3] = 0;
			}
		}
	}
}