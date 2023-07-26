#ifndef _Arcanum_Game_Application_hpp_
#define _Arcanum_Game_Application_hpp_

#include <Engine/Graphics/Canvas.hpp>
#include <Arcanum/Game/Settings.hpp>
#include <Engine/Managers/FileManager.hpp>
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
