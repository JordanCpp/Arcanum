#include <Arcanum/Math/Point.hpp>

using namespace arcanum::math;

Point::Point() :
	X(0),
	Y(0)
{
}

Point::Point(size_t x, size_t y) :
	X(x),
	Y(y)
{
}
