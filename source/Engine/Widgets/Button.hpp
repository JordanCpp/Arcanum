#ifndef _Engine_Widgets_Button_hpp_
#define _Engine_Widgets_Button_hpp_

#include <Engine/Widgets/Widget.hpp>

namespace engine
{
    namespace widgets 
    {
        class Button : public Widget
        {
        public:
            Button(graphics::Canvas* canvas, const graphics::Point& pos, const graphics::Point& size);
            void draw();
        private:
        };
    }
}

#endif
