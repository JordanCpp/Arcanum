#include <Arcanum/Game/Settings.hpp>

using namespace Engine::Graphics;
using namespace Arcanum::Game;

const Point& Settings::getWindowSize()
{
	return WindowSize;
}

void Settings::setWindowSize(const Point& size)
{
	WindowSize = size;
}

const std::string& Settings::getWindowTitle()
{
	return WindowTitle;
}

void Settings::setWindowTitle(const std::string& title)
{
	WindowTitle = title;
}
