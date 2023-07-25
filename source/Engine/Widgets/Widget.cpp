#include <Engine/Widgets/Widget.hpp>

using namespace Engine::Graphics;
using namespace Engine::Widgets;

Widget::Widget(Graphics::Canvas* canvas, const Point& pos, const Point& size) :
	Canvas(canvas),
	Pos(pos),
	Size(size)
{
}
