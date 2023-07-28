#ifndef ARCANUM_GAME_APPLICATION_HPP
#define ARCANUM_GAME_APPLICATION_HPP

#include <Arcanum/Game/Settings.hpp>
#include <Arcanum/UI/MainMenu.hpp>
#include <Arcanum/Managers/SpriteManager.hpp>

namespace arcanum
{
	namespace game
	{
		class Application
		{
		public:
			Application(Settings* settings);
			~Application();
			void run();
		private:
			loaders::ArtLoader mArtLoader;
			Settings* mSettings;
			graphics::Canvas mCanvas;
			managers::FileManager mFileManager;
			managers::SpriteManager mSpriteManager;
			ui::MainMenu mMainMenu;
		};
	}
}

#endif    
