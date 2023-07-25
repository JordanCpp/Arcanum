#ifndef _Engine_Common_PathNormalizer_hpp_
#define _Engine_Common_PathNormalizer_hpp_

#include <string>

namespace Engine
{
	namespace Common
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