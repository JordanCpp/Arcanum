#ifndef _Engine_Widgets_Widget_hpp_
#define _Engine_Widgets_Widget_hpp_

#include <Engine/Graphics/Canvas.hpp>

namespace Engine
{
    namespace Widgets
    {
        class Widget
        {
        public:
            Widget(Graphics::Canvas* canvas, const Graphics::Point& pos, const Graphics::Point& size);
            virtual void Draw() = 0;
        private:
            Graphics::Canvas* Canvas;
            Graphics::Point Pos;
            Graphics::Point Size;
        };
    }
}

#endif
