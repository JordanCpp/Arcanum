#include <Arcanum/Game/Application.hpp>
#include <iostream>

using namespace Arcanum::Game;

int main(int argc, char* argv[])
{
    try 
    {
        Application application;
        application.Run();
    }
    catch (const char* msg) 
    {
        std::cerr << msg << std::endl;
    }

    return 0;
}
