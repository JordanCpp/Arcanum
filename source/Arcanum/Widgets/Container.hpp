#ifndef ENGINE_WIDGETS_CONTAINER_HPP
#define ENGINE_WIDGETS_CONTAINER_HPP

#include <Arcanum/Widgets/Widget.hpp>
#include <vector>

namespace arcanum
{
    namespace widgets
    {
        class Container
        {
        public:
            void add(Widget* widget);
            void draw();
        private:
            std::vector<Widget*> mWidgets;
        };
    }
}

#endif
