#ifndef ARCANUM_GAME_SETTINGS_HPP
#define ARCANUM_GAME_SETTINGS_HPP

#include <string>
#include <Arcanum/Math/Point.hpp>

namespace arcanum
{
	namespace game
	{
		class Settings
		{
		public:
			const math::Point& getWindowSize();
			void setWindowSize(const math::Point& size);

			const std::string& getWindowTitle();
			void setWindowTitle(const std::string& title);
		private:
			math::Point mWindowSize;
			std::string mWindowTitle;
		};
	}
}

#endif    
