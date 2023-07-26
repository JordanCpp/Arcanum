#ifndef _Engine_Widgets_Form_hpp_
#define _Engine_Widgets_Form_hpp_

#include <Engine/Widgets/Container.hpp>

namespace engine
{
    namespace widgets 
    {
        class Form : public Widget
        {
        public:
            Form(graphics::Canvas* canvas, const graphics::Point& pos, const graphics::Point& size);
            void draw();
            void add(Widget* widget);
        private:
            Container mWidgets;
        };
    }
}

#endif
