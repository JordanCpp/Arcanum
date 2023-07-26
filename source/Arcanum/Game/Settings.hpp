#ifndef _Arcanum_Game_Settings_hpp_
#define _Arcanum_Game_Settings_hpp_

#include <string>
#include <Engine/Graphics/Point.hpp>

namespace Arcanum
{
	namespace Game
	{
		class Settings
		{
		public:
			const Engine::Graphics::Point& getWindowSize();
			void setWindowSize(const Engine::Graphics::Point& size);

			const std::string& getWindowTitle();
			void setWindowTitle(const std::string& title);
		private:
			Engine::Graphics::Point mWindowSize;
			std::string mWindowTitle;
		};
	}
}

#endif    
