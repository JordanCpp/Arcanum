#ifndef _Engine_Graphics_Point_hpp_
#define _Engine_Graphics_Point_hpp_

#include <cstdint>

namespace Engine
{
	namespace Graphics
	{
		class Point
		{
		public:
			Point();
			Point(size_t x, size_t y);

			size_t X;
			size_t Y;
		};
	}
}

#endif    
