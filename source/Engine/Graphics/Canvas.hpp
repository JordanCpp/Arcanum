#ifndef ENGINE_GRAPHICS_CANVAS_HPP
#define ENGINE_GRAPHICS_CANVAS_HPP

#include <SDL.h>
#include <string>
#include <Engine/Math/Point.hpp>

namespace engine
{
	namespace graphics
	{
		class Canvas
		{
		public:
			Canvas(const math::Point& size, const std::string& title);
			~Canvas();
			const math::Point getSize();
			SDL_Renderer* getRender();
			bool getEvent(SDL_Event& dest);
		private:
			bool mRunning;
			SDL_Window* mWindow;
			SDL_Renderer* mRender;
			math::Point mSize;
		};
	}
}

#endif    
