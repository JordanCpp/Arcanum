#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace Arcanum::Game;
using namespace Engine::Graphics;

int main(int argc, char* argv[])
{
    try 
    {
        Settings settings;
        settings.setWindowSize(Point(1024, 768));
        settings.setWindowTitle("Arcanum project");

        Application application(&settings);
        application.Run();
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }

    return 0;
}
