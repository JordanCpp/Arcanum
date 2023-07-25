#include <Engine/Common/PathNormalizer.hpp>

using namespace Engine::Common;

void PathNormalizer::normalize(char* path)
{
	size_t i = 0;

	while (path[i] != '\0')
	{
		if (path[i] == '\\')
			path[i] = '/';

		i++;
	}
}

void PathNormalizer::normalize(std::string& path)
{
	normalize((char*)path[0]);
}