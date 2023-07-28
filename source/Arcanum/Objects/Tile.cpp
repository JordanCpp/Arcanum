#include <Arcanum/Objects/Tile.hpp>

using namespace arcanum::math;
using namespace arcanum::objects;
using namespace arcanum::graphics;

const Point& Tile::getSize()
{
	return mSize;
}

void Tile::setSize(const Point& value)
{
	mSize = value;
}

const std::shared_ptr<Sprite> Tile::getSprite()
{
	return mBody;
}

void Tile::setSize(std::shared_ptr<Sprite> value)
{
	mBody = value;
}
