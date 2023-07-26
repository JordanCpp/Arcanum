#ifndef _Engine_Graphics_Image_hpp_
#define _Engine_Graphics_Image_hpp_

#include <Engine/Graphics/Canvas.hpp>

namespace Engine
{
	namespace Graphics
	{
		class Image
		{
		public:
			Image(Graphics::Canvas* canvas, uint8_t* pixels, const Point& size, const Point& offset, const Point& delta);
			~Image();
			const Point& getSize();
			const Point& getOffset();
			const Point& getDelta();
			void draw(const Point& pos);
		private:
			Graphics::Canvas* mCanvas;
			SDL_Texture* mTexture;
			Point mSize;
			Point mOffset;
			Point mDelta;
		};
	}
}

#endif    
