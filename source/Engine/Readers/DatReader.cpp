#include <Engine/Readers/DatReader.hpp>
#include <string.h>
#include <zlib.h>

using namespace engine::readers;

bool DatReader::reset(const std::string& file, DatList& datList)
{
	if (mInput.is_open())
		mInput.close();

	mInput.open(file, std::ios::binary);

	if (mInput.is_open())
	{
		int treesubs   = 0;	
		int filestotal = 0;

		mInput.seekg(-0x1Cl, std::ios::end);
		mInput.seekg(16, std::ios::cur);
		mInput.seekg(4, std::ios::cur);
		mInput.seekg(4, std::ios::cur);
		mInput.read((char*)&treesubs, 0x04);
		mInput.seekg(-treesubs, std::ios::end);
		mInput.read((char*)&filestotal, 0x04);

		for (int i = 1; i <= filestotal; i++)
		{
			DatItem item;

			mInput.read((char*)&item.NameSize, 0x04);
			mInput.read((char*)&item.Name    , item.NameSize);

			mPathNormalizer.normalize(item.Name);

			mInput.read((char*)&item.Unknown1  , 0x04);
			mInput.read((char*)&item.Type      , 0x04);
			mInput.read((char*)&item.RealSize  , 0x04);
			mInput.read((char*)&item.PackedSize, 0x04);
			mInput.read((char*)&item.Offset    , 0x04);
			strcpy(item.DatFile, file.c_str());

			auto j = datList.List.find(item.Name);

			if (j == datList.List.end())
				datList.List.emplace(item.Name, item);
			else
				strcpy(j->second.DatFile, file.c_str());
		}

		mInput.close();

		return true;
	}

	return false;
}

DatItem* DatList::getItem(const std::string& file)
{
	auto i = List.find(file);

	if (i != List.end())
		return &i->second;

	return nullptr;
}

DatItem::DatItem() :
	NameSize(0),
	Unknown1(0),
	Type(0),
	RealSize(0),
	PackedSize(0),
	Offset(0)
{
	memset(Name, 0, DatItem::MaxPath);
	memset(DatFile, 0, DatItem::MaxName);
}
