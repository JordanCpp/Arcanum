#ifndef _Arcanum_Game_Application_hpp_
#define _Arcanum_Game_Application_hpp_

#include <Engine/Graphics/Canvas.hpp>
#include <Arcanum/Game/Settings.hpp>
#include <Engine/Managers/FileManager.hpp>
#include <Engine/UI/MainMenu.hpp>
#include <Engine/Managers/SpriteManager.hpp>

namespace Arcanum
{
	namespace Game
	{
		class Application
		{
		public:
			Application(Settings* settings);
			~Application();
			void run();
		private:
			Engine::Loaders::ArtLoader mArtLoader;
			Settings* mSettings;
			Engine::Graphics::Canvas mCanvas;
			Engine::Managers::FileManager mFileManager;
			Engine::Managers::SpriteManager mSpriteManager;
			Engine::UI::MainMenu mMainMenu;
		};
	}
}

#endif    
