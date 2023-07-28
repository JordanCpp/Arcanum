#ifndef ENGINE_COMMON_PATHNORMALIZER_HPP
#define ENGINE_COMMON_PATHNORMALIZER_HPP

#include <string>

namespace arcanum
{
	namespace common
	{
		class PathNormalizer
		{
		public:
			void normalize(char* path);
			void normalize(std::string& path);
		private:
		};
	}
}

#endif