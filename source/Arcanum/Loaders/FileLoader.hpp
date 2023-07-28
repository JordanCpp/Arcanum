#ifndef ENGINE_LOADERS_FILELOADER_HPP
#define ENGINE_LOADERS_FILELOADER_HPP

#include <fstream>
#include <string>
#include <Arcanum/Formats/DataFile.hpp>

namespace arcanum
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
