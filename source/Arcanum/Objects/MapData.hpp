#ifndef ARCANUM_OBJECTS_MAPDATA_HPP
#define ARCANUM_OBJECTS_MAPDATA_HPP

#include <Arcanum/Objects/Tile.hpp>
#include <Arcanum/Objects/Scenery.hpp>

namespace arcanum
{
	namespace objects
	{
		class MapData
		{
		public:
			void reset(const math::Point& size);
			const math::Point& getSize();
			size_t getIndex(const math::Point& pos);
			std::vector<Tile>& getTiles();
		private:
			math::Point mSize;
			std::vector<Tile> mTiles;
		};
	}
}

#endif    
