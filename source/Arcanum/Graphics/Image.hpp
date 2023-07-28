#ifndef ENGINE_GRAPHICS_IMAGE_HPP
#define ENGINE_GRAPHICS_IMAGE_HPP

#include <Arcanum/Graphics/Render.hpp>

namespace arcanum
{
	namespace graphics
	{
		class Image
		{
		public:
			Image(graphics::Render* render, uint8_t* pixels, const math::Point& size, const math::Point& offset, const math::Point& delta);
			~Image();
			SDL_Texture* getTexture();
			const math::Point& getSize();
			const math::Point& getOffset();
			const math::Point& getDelta();
			void draw(const math::Point& dstPos, const math::Point& dstSize);
			void draw(const math::Point& pos);
		private:
			graphics::Render* mRender;
			SDL_Texture* mTexture;
			math::Point mSize;
			math::Point mOffset;
			math::Point mDelta;
		};
	}
}

#endif    
