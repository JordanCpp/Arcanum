#ifndef _Arcanum_Game_Application_hpp_
#define _Arcanum_Game_Application_hpp_

#include <Engine/Graphics/Canvas.hpp>

namespace Arcanum
{
	namespace Game
	{
		class Application
		{
		public:
			Application();
			~Application();
			void Run();
		private:
			Engine::Graphics::Canvas Canvas;
		};
	}
}

#endif    
