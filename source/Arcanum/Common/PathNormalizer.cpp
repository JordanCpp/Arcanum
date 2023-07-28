#include <Arcanum/Common/PathNormalizer.hpp>

using namespace arcanum::common;

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
	normalize(path.data());
}