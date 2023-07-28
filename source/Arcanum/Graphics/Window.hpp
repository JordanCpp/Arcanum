#ifndef ENGINE_GRAPHICS_CANVAS_HPP
#define ENGINE_GRAPHICS_CANVAS_HPP

#include <SDL.h>
#include <string>
#include <Arcanum/Math/Point.hpp>

namespace arcanum
{
	namespace graphics
	{
		class Window
		{
		public:
			Window(const math::Point& size, const std::string& title);
			~Window();
			const math::Point getSize();
			SDL_Window* getWindow();
			bool getEvent(SDL_Event& dest);
		private:
			bool mRunning;
			SDL_Window* mWindow;
			math::Point mSize;
		};
	}
}

#endif    
