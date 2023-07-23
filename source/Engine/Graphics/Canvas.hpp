#ifndef _Engine_Graphics_Canvas_hpp_
#define _Engine_Graphics_Canvas_hpp_

#include <SDL.h>
#include <cstdint>
#include <string>

namespace Engine
{
	namespace Graphics
	{
		class Canvas
		{
		public:
			Canvas(size_t width, size_t heigth, const std::string& title);
			~Canvas();
			bool getEvent(SDL_Event& dest);
		private:
			bool Running;
			SDL_Window* Window;
			SDL_Renderer* Render;
		};
	}
}

#endif    
