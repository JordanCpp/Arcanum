#ifndef _Engine_Graphics_Canvas_hpp_
#define _Engine_Graphics_Canvas_hpp_

#include <SDL.h>
#include <cstdint>
#include <string>
#include <Engine/Graphics/Point.hpp>

namespace engine
{
	namespace graphics
	{
		class Canvas
		{
		public:
			Canvas(const Point& size, const std::string& title);
			~Canvas();
			const Point getSize();
			SDL_Renderer* getRender();
			bool getEvent(SDL_Event& dest);
		private:
			bool mRunning;
			SDL_Window* mWindow;
			SDL_Renderer* mRender;
			Point mSize;
		};
	}
}

#endif    
