#include <Engine/Loaders/DatLoader.hpp>
#include <zlib.h>

using namespace Engine::Loaders;
using namespace Engine::Readers;
using namespace Engine::Formats;

DatLoader::DatLoader(Readers::DatList* datList) :
	DatList(datList)
{
	Buffer.reserve(DatLoader::Bytes);
}

bool DatLoader::getFile(const std::string& path, DataFile* dataFile)
{
	dataFile->getContent().clear();
	Buffer.clear();

	DatItem* p = DatList->getItem(path);

	int z_err = 0;

	if (p != nullptr)
	{
		Input.open(p->DatFile, std::ios::binary);

		if (Input.is_open())
		{
			if (p->Type == DatItem::Uncompressed)
			{
				Input.seekg(p->Offset, std::ios::beg);

				dataFile->getContent().resize(p->RealSize);

				Input.read((char*)dataFile->getContent().data(), p->RealSize);
			}
			else if (p->Type == DatItem::Compressed)
			{
				Input.seekg(p->Offset, std::ios::beg);

				dataFile->getContent().resize(p->RealSize);
				Buffer.resize(p->PackedSize);

				Input.read((char*)&Buffer[0], p->PackedSize);

				z_err = uncompress(dataFile->getContent().data(), (uLongf*)&p->RealSize, Buffer.data(), p->PackedSize);
			}

			Input.close();
		}

		return true;
	}
	else
	{
		return false;
	}
}
