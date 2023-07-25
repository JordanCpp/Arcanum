#include <Engine/Formats/DataFile.hpp>

using namespace Engine::Formats;

std::vector<uint8_t>& DataFile::getContent()
{
	return Content;
}