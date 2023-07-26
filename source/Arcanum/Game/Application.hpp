#ifndef ARCANUM_GAME_APPLICATION_HPP
#define ARCANUM_GAME_APPLICATION_HPP

#include <Arcanum/Game/Settings.hpp>
#include <Engine/UI/MainMenu.hpp>
#include <Engine/Managers/SpriteManager.hpp>

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
			engine::loaders::ArtLoader mArtLoader;
			Settings* mSettings;
			engine::graphics::Canvas mCanvas;
			engine::managers::FileManager mFileManager;
			engine::managers::SpriteManager mSpriteManager;
			engine::ui::MainMenu mMainMenu;
		};
	}
}

#endif    
