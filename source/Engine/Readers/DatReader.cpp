#include <Engine/Readers/DatReader.hpp>
#include <string.h>
#include <zlib.h>

using namespace Engine::Readers;

bool DatReader::Reset(const std::string& file, DatList& datList)
{
	if (File.is_open())
		File.close();

	File.open(file, std::ios::binary);

	if (File.is_open())
	{
		int treesubs   = 0;	
		int filestotal = 0;

		File.seekg(-0x1Cl, std::ios::end);
		File.seekg(16, std::ios::cur);
		File.seekg(4, std::ios::cur);
		File.seekg(4, std::ios::cur);
		File.read((char*)&treesubs, 0x04);
		File.seekg(-treesubs, std::ios::end);
		File.read((char*)&filestotal, 0x04);

		for (int i = 1; i <= filestotal; i++)
		{
			DatItem item;

			File.read((char*)&item.NameSize, 0x04);
			File.read((char*)&item.Name    , item.NameSize);

			PathNormalizer.normalize(item.Name);

			File.read((char*)&item.Unknown1  , 0x04);
			File.read((char*)&item.Type      , 0x04);
			File.read((char*)&item.RealSize  , 0x04);
			File.read((char*)&item.PackedSize, 0x04);
			File.read((char*)&item.Offset    , 0x04);
			strcpy(item.DatFile, file.c_str());

			auto j = datList.List.find(item.Name);

			if (j == datList.List.end())
				datList.List.emplace(item.Name, item);
			else
				strcpy(j->second.DatFile, file.c_str());
		}

		File.close();

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
