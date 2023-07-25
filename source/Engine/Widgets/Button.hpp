#ifndef _Engine_Widgets_Button_hpp_
#define _Engine_Widgets_Button_hpp_

#include <Engine/Widgets/Widget.hpp>

namespace Engine
{
    namespace Widgets 
    {
        class Button : public Widget
        {
        public:
            Button(Graphics::Canvas* canvas, const Graphics::Point& pos, const Graphics::Point& size);
            void Draw();
        private:
        };
    }
}

#endif
