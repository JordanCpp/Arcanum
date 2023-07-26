#ifndef _Engine_Common_PathNormalizer_hpp_
#define _Engine_Common_PathNormalizer_hpp_

#include <string>

namespace engine
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