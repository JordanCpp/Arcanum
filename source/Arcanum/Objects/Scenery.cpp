#include <Arcanum/Objects/Scenery.hpp>

using namespace arcanum::math;
using namespace arcanum::objects;
using namespace arcanum::graphics;

const Point& Scenery::getPos()
{
	return mPos;
}

void Scenery::setPos(const Point& value)
{
	mPos = value;
}

const std::shared_ptr<Sprite> Scenery::getSprite()
{
	return mBody;
}

void Scenery::setSprite(std::shared_ptr<Sprite> value)
{
	mBody = value;
}
