#include <Arcanum/Loaders/DatLoader.hpp>
#include <zlib.h>

using namespace arcanum::loaders;
using namespace arcanum::readers;
using namespace arcanum::formats;

DatLoader::DatLoader(readers::DatList* datList) :
	mDatList(datList)
{
	mBuffer.reserve(DatLoader::Bytes);
}

bool DatLoader::getFile(const std::string& path, DataFile* dataFile)
{
	dataFile->getContent().clear();
	mBuffer.clear();

	DatItem* p = mDatList->getItem(path);

	int z_err = 0;

	if (p != nullptr)
	{
		mInput.open(p->DatFile, std::ios::binary);

		if (mInput.is_open())
		{
			if (p->Type == DatItem::Uncompressed)
			{
				mInput.seekg(p->Offset, std::ios::beg);

				dataFile->getContent().resize(p->RealSize);

				mInput.read((char*)dataFile->getContent().data(), p->RealSize);
			}
			else if (p->Type == DatItem::Compressed)
			{
				mInput.seekg(p->Offset, std::ios::beg);

				dataFile->getContent().resize(p->RealSize);
				mBuffer.resize(p->PackedSize);

				mInput.read((char*)&mBuffer[0], p->PackedSize);

				z_err = uncompress(dataFile->getContent().data(), (uLongf*)&p->RealSize, mBuffer.data(), p->PackedSize);
			}

			mInput.close();
		}

		return true;
	}
	else
	{
		return false;
	}
}
