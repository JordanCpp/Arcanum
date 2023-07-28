#include <Arcanum/Objects/Map.hpp>

using namespace arcanum::math;
using namespace arcanum::objects;

Map::Map(MapData* mapData) :
	mMapData(mapData)
{
}

void Map::CalculateTiles(float scale)
{
	for (size_t x = 0; x < mMapData->getSize().X; x++)
	{
		for (size_t y = 0; y < mMapData->getSize().Y; y++)
		{
			size_t dx = y * (Tile::Width / 2) * scale;
			size_t dy = x * Tile::Height * scale;

			Point pt = mIsometric.CartesianToIsometric(Point(dx, dy));

			size_t index = mMapData->getIndex(Point(x, y));

			mMapData->getTiles()[index].setPos(pt);
		}
	}
}

void Map::Draw(const math::Point& pos, float scale)
{
	CalculateTiles(scale);

	DrawTiles(pos, scale);
	DrawSceneries(pos, scale);
}

void Map::DrawTiles(const Point& dstPos, float scale)
{
	Point pos;

	for (size_t i = 0; i < mMapData->getTiles().size(); i++)
	{
		pos = mMapData->getTiles()[i].getPos();

		mMapData->getTiles()[i].getSprite()->single()->draw(Point(pos.X + dstPos.X, pos.Y + dstPos.Y), Point(Tile::Width * scale, Tile::Height * scale));
	}
}

void Map::DrawSceneries(const Point& dstPos, float scale)
{
	Point pos;

	for (size_t i = 0; i < mMapData->getTiles().size(); i++)
	{
		pos = mMapData->getTiles()[i].getPos();

		Scenery* scenery = mMapData->getTiles()[i].getScenery();

		if (scenery)
		{
			auto sprite = scenery->getSprite();

			size_t x = sprite->single()->getOffset().X * scale;
			size_t y = sprite->single()->getOffset().Y * scale;

			Point center = Point(pos.X + Tile::Width / 2 * scale, pos.Y + Tile::Height / 2 * scale);

			sprite->single()->draw(Point(dstPos.X + center.X - x, dstPos.Y + center.Y - y), Point(sprite->single()->getSize().X * scale, sprite->single()->getSize().Y * scale));
		}
	}
}
