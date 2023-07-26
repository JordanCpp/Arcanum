#include <Arcanum/Game/Settings.hpp>

using namespace Engine::Graphics;
using namespace Arcanum::Game;

const Point& Settings::getWindowSize()
{
	return mWindowSize;
}

void Settings::setWindowSize(const Point& size)
{
	mWindowSize = size;
}

const std::string& Settings::getWindowTitle()
{
	return mWindowTitle;
}

void Settings::setWindowTitle(const std::string& title)
{
	mWindowTitle = title;
}
