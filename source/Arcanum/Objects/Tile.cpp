#include <Arcanum/Objects/Tile.hpp>

using namespace arcanum::math;
using namespace arcanum::objects;
using namespace arcanum::graphics;

Tile::Tile() :
	mScenery(nullptr)
{
}

Scenery* Tile::getScenery()
{
	return mScenery;
}

void Tile::setScenery(Scenery* value)
{
	mScenery = value;
}

const Point& Tile::getPos()
{
	return mPos;
}

void Tile::setPos(const Point& value)
{
	mPos = value;
}

const std::shared_ptr<Sprite> Tile::getSprite()
{
	return mBody;
}

void Tile::setSprite(std::shared_ptr<Sprite> value)
{
	mBody = value;
}
