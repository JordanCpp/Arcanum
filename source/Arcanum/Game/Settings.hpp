#ifndef _Arcanum_Game_Settings_hpp_
#define _Arcanum_Game_Settings_hpp_

#include <string>
#include <Engine/Graphics/Point.hpp>

namespace arcanum
{
	namespace game
	{
		class Settings
		{
		public:
			const engine::graphics::Point& getWindowSize();
			void setWindowSize(const engine::graphics::Point& size);

			const std::string& getWindowTitle();
			void setWindowTitle(const std::string& title);
		private:
			engine::graphics::Point mWindowSize;
			std::string mWindowTitle;
		};
	}
}

#endif    
