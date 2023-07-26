#ifndef ARCANUM_GAME_SETTINGS_HPP
#define ARCANUM_GAME_SETTINGS_HPP

#include <string>
#include <Engine/Math/Point.hpp>

namespace arcanum
{
	namespace game
	{
		class Settings
		{
		public:
			const engine::math::Point& getWindowSize();
			void setWindowSize(const engine::math::Point& size);

			const std::string& getWindowTitle();
			void setWindowTitle(const std::string& title);
		private:
			engine::math::Point mWindowSize;
			std::string mWindowTitle;
		};
	}
}

#endif    
