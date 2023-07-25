#ifndef _Arcanum_Game_Application_hpp_
#define _Arcanum_Game_Application_hpp_

#include <Engine/Graphics/Canvas.hpp>
#include <Arcanum/Game/Settings.hpp>
#include <Engine/Managers/FileManager.hpp>

namespace Arcanum
{
	namespace Game
	{
		class Application
		{
		public:
			Application(Settings* settings);
			~Application();
			void Run();
		private:
			Settings* Settings;
			Engine::Graphics::Canvas Canvas;
			Engine::Managers::FileManager FileManager;
		};
	}
}

#endif    
