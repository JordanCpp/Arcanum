#ifndef ARCANUM_OBJECTS_TILE_HPP
#define ARCANUM_OBJECTS_TILE_HPP

#include <Arcanum/Graphics/Sprite.hpp>

namespace arcanum
{
	namespace objects
	{
		class Tile
		{
		public:
			const math::Point& getSize();
			void setSize(const math::Point& value);

			const std::shared_ptr<graphics::Sprite> getSprite();
			void setSize(std::shared_ptr<graphics::Sprite> value);
		private:
			math::Point mSize;
			std::shared_ptr<graphics::Sprite> mBody;
		};
	}
}

#endif    
