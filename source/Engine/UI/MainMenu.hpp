#ifndef _Engine_UI_MainMenu_hpp_
#define _Engine_UI_MainMenu_hpp_

#include <Engine/Widgets/Form.hpp>

namespace Engine
{
    namespace UI
    {
        class MainMenu
        {
        public:
            MainMenu(Graphics::Canvas* canvas);
            void draw();
        private:
            Widgets::Form mForm;
        };
    }
}

#endif
