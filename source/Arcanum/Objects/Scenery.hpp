#ifndef ARCANUM_OBJECTS_SCENERY_HPP
#define ARCANUM_OBJECTS_SCENERY_HPP

#include <Arcanum/Graphics/Sprite.hpp>

namespace arcanum
{
	namespace objects
	{
		class Scenery
		{
		public:
			const math::Point& getPos();
			void setPos(const math::Point& value);
			const std::shared_ptr<graphics::Sprite> getSprite();
			void setSprite(std::shared_ptr<graphics::Sprite> value);
		private:
			math::Point mPos;
			std::shared_ptr<graphics::Sprite> mBody;
		};
	}
}

#endif    
