#include <Engine/Readers/FileReader.hpp>
#include  <string.h>

using namespace engine::readers;
using namespace engine::formats;

void FileReader::open(DataFile* dataFile)
{
	mDataFile = dataFile;
	mOffset = 0;
}

void FileReader::close()
{
	mDataFile = nullptr;
}

void FileReader::read(void* dest, size_t bytes)
{
	memcpy(dest, &mDataFile->getContent()[mOffset], bytes);

	mOffset += bytes;
}
