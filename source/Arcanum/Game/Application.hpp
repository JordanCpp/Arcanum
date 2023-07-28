#ifndef ARCANUM_GAME_APPLICATION_HPP
#define ARCANUM_GAME_APPLICATION_HPP

#include <Arcanum/Game/Settings.hpp>
#include <Arcanum/UI/MainMenu.hpp>
#include <Arcanum/Managers/SpriteManager.hpp>
#include <Arcanum/Objects/Map.hpp>

namespace arcanum
{
	namespace game
	{
		class Application
		{
		public:
			Application(Settings* settings);
			void run();
		private:
			loaders::ArtLoader mArtLoader;
			Settings* mSettings;
			graphics::Window mWindow;
			graphics::Render mRender;
			managers::FileManager mFileManager;
			managers::SpriteManager mSpriteManager;
			objects::MapData mMapData;
			objects::Map mMap;
			ui::MainMenu mMainMenu;
		};
	}
}

#endif    
