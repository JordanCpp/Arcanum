#ifndef ENGINE_GRAPHICS_RENDER_HPP
#define ENGINE_GRAPHICS_RENDER_HPP

#include <Arcanum/Graphics/Window.hpp>

namespace arcanum
{
	namespace graphics
	{
		class Render
		{
		public:
			Render(Window* window);
			~Render();
			SDL_Renderer* getRender();
			const math::Point getSize();
			void Draw();
		private:
			Window* mWindow;
			SDL_Renderer* mRender;
		};
	}
}

#endif    
