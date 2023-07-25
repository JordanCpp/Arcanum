#include <Engine/Readers/FileReader.hpp>
#include  <string.h>

using namespace Engine::Readers;

void FileReader::open(Formats::DataFile* dataFile)
{
	DataFile = dataFile;
	Offset = 0;
}

void FileReader::close()
{
	DataFile = nullptr;
}

void FileReader::read(void* dest, size_t bytes)
{
	memcpy(dest, &DataFile->getContent()[Offset], bytes);

	Offset += bytes;
}
