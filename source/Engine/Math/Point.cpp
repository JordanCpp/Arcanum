#include <Engine/Math/Point.hpp>

using namespace engine::math;

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
