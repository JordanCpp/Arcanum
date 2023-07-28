#ifndef ENGINE_MATH_POINT_HPP
#define ENGINE_MATH_POINT_HPP

#include <cstddef>

namespace arcanum
{
	namespace math
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
