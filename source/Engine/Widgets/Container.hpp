#ifndef _Engine_Widgets_Container_hpp_
#define _Engine_Widgets_Container_hpp_

#include <Engine/Widgets/Widget.hpp>
#include <vector>

namespace engine
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
