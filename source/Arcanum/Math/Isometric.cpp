#include <Arcanum/Math/Isometric.hpp>

using namespace arcanum::math;

const Point& Isometric::CartesianToIsometric(const Point& pos)
{
	size_t x = pos.X - pos.Y;
	size_t y = (pos.X + pos.Y) / 2;

	mResult = Point(x, y);

	return mResult;
}

const Point& Isometric::IsometricToCartesian(const Point& pos)
{
	size_t x = (2 * pos.Y + pos.X) / 2;
	size_t y = (2 * pos.Y - pos.X) / 2;

	mResult = Point(x, y);

	return mResult;
}
