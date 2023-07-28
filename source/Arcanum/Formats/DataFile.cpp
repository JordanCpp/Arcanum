#include <Arcanum/Formats/DataFile.hpp>

using namespace arcanum::formats;

std::vector<uint8_t>& DataFile::getContent()
{
	return mContent;
}