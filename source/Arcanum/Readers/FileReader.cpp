#include <Arcanum/Readers/FileReader.hpp>
#include  <string.h>

using namespace arcanum::readers;
using namespace arcanum::formats;

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
