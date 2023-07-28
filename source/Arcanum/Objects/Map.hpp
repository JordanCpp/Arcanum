#ifndef ARCANUM_OBJECTS_MAP_HPP
#define ARCANUM_OBJECTS_MAP_HPP

#include <Arcanum/Objects/MapData.hpp>
#include <Arcanum/Math/Isometric.hpp>

namespace arcanum
{
	namespace objects
	{
		class Map
		{
		public:
			Map(MapData * mapData);
			void CalculateTiles(float scale);
			void Draw(const math::Point& pos, float scale);
			void DrawTiles(const math::Point& pos, float scale);
			void DrawSceneries(const math::Point& pos, float scale);
		private:
			MapData* mMapData;
			math::Isometric mIsometric;
		};
	}
}

#endif    
