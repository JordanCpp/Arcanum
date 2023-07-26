#ifndef _Engine_Widgets_Widget_hpp_
#define _Engine_Widgets_Widget_hpp_

#include <Engine/Graphics/Canvas.hpp>

namespace engine
{
    namespace widgets
    {
        class Widget
        {
        public:
            Widget(graphics::Canvas* canvas, const graphics::Point& pos, const graphics::Point& size);
            virtual void draw() = 0;
        private:
            graphics::Canvas* mCanvas;
            graphics::Point mPos;
            graphics::Point mSize;
        };
    }
}

#endif
