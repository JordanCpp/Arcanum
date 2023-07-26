#ifndef _Engine_Graphics_Point_hpp_
#define _Engine_Graphics_Point_hpp_

#include <cstdint>
#include <cstddef>

namespace engine
{
	namespace graphics
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
