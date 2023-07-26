#ifndef ENGINE_GRAPHICS_IMAGE_HPP
#define ENGINE_GRAPHICS_IMAGE_HPP

#include <Engine/Graphics/Canvas.hpp>

namespace engine
{
	namespace graphics
	{
		class Image
		{
		public:
			Image(graphics::Canvas* canvas, uint8_t* pixels, const math::Point& size, const math::Point& offset, const math::Point& delta);
			~Image();
			const math::Point& getSize();
			const math::Point& getOffset();
			const math::Point& getDelta();
			void draw(const math::Point& pos);
		private:
			graphics::Canvas* mCanvas;
			SDL_Texture* mTexture;
			math::Point mSize;
			math::Point mOffset;
			math::Point mDelta;
		};
	}
}

#endif    
