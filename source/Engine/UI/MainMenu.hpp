#ifndef _Engine_UI_MainMenu_hpp_
#define _Engine_UI_MainMenu_hpp_

#include <Engine/Widgets/Form.hpp>

namespace engine
{
    namespace ui
    {
        class MainMenu
        {
        public:
            MainMenu(graphics::Canvas* canvas);
            void draw();
        private:
            widgets::Form mForm;
        };
    }
}

#endif
