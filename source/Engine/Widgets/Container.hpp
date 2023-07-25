#ifndef _Engine_Widgets_Container_hpp_
#define _Engine_Widgets_Container_hpp_

#include <Engine/Widgets/Widget.hpp>
#include <vector>

namespace Engine
{
    namespace Widgets
    {
        class Container
        {
        public:
            void Add(Widget* widget);
            void Draw();
        private:
            std::vector<Widget*> Widgets;
        };
    }
}

#endif
