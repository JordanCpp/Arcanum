#ifndef _Engine_Graphics_Image_hpp_
#define _Engine_Graphics_Image_hpp_

#include <Engine/Graphics/Canvas.hpp>

namespace engine
{
	namespace graphics
	{
		class Image
		{
		public:
			Image(graphics::Canvas* canvas, uint8_t* pixels, const Point& size, const Point& offset, const Point& delta);
			~Image();
			const Point& getSize();
			const Point& getOffset();
			const Point& getDelta();
			void draw(const Point& pos);
		private:
			graphics::Canvas* mCanvas;
			SDL_Texture* mTexture;
			Point mSize;
			Point mOffset;
			Point mDelta;
		};
	}
}

#endif    
