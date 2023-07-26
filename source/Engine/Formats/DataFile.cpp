#include <Engine/Formats/DataFile.hpp>

using namespace engine::formats;

std::vector<uint8_t>& DataFile::getContent()
{
	return mContent;
}