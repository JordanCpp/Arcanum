#ifndef ENGINE_LOADERS_FILELOADER_HPP
#define ENGINE_LOADERS_FILELOADER_HPP

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
