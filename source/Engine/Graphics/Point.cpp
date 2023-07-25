#include <Engine/Graphics/Point.hpp>

using namespace Engine::Graphics;

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
