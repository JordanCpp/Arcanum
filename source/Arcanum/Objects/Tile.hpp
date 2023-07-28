#ifndef ARCANUM_OBJECTS_TILE_HPP
#define ARCANUM_OBJECTS_TILE_HPP

#include <Arcanum/Graphics/Sprite.hpp>
#include <Arcanum/Objects/Scenery.hpp>

namespace arcanum
{
	namespace objects
	{
		class Tile
		{
		public:
			enum
			{
				Width  = 78,
				Height = 40
			};
			Tile();
			Scenery* getScenery();
			void setScenery(Scenery* value);
			const math::Point& getPos();
			void setPos(const math::Point& value);
			const std::shared_ptr<graphics::Sprite> getSprite();
			void setSprite(std::shared_ptr<graphics::Sprite> value);
		private:
			Scenery* mScenery;
			math::Point mPos;
			std::shared_ptr<graphics::Sprite> mBody;
		};
	}
}

#endif    
