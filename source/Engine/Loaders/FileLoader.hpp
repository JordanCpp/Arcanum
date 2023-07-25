#ifndef _Engine_Loaders_FileLoader_hpp_
#define _Engine_Loaders_FileLoader_hpp_

#include <fstream>
#include <string>
#include <Engine/Formats/DataFile.hpp>

namespace Engine
{
    namespace Loaders
    {
        class FileLoader
        {
        public:
            void Reset(const std::string& path, Formats::DataFile* dataFile);
        private:
            std::ifstream Input;
        };
    }
}

#endif
