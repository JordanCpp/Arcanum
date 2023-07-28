#include <Arcanum/Objects/MapData.hpp>

using namespace arcanum::math;
using namespace arcanum::objects;

void MapData::reset(const math::Point& size)
{
	mSize = size;

	mTiles.resize(size.X * size.Y);
}

const Point& MapData::getSize()
{
	return mSize;
}

size_t MapData::getIndex(const Point& pos)
{
	return (getSize().X * pos.Y) + pos.X;
}

std::vector<Tile>& MapData::getTiles()
{
	return mTiles;
}

std::vector<Scenery>& MapData::getSceneries()
{
	return mSceneries;
}
