#include <Engine/Widgets/Container.hpp>

using namespace engine::widgets;

void Container::add(Widget* widget)
{
	mWidgets.push_back(widget);
}

void Container::draw()
{
	for (size_t i = 0; i < mWidgets.size(); i++)
	{
		mWidgets[i]->draw();
	}
}
