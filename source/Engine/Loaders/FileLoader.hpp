#ifndef _Engine_Loaders_FileLoader_hpp_
#define _Engine_Loaders_FileLoader_hpp_

#include <fstream>
#include <string>
#include <Engine/Formats/DataFile.hpp>

namespace engine
{
    namespace loaders
    {
        class FileLoader
        {
        public:
            void reset(const std::string& path, formats::DataFile* dataFile);
        private:
            std::ifstream mInput;
        };
    }
}

#endif
