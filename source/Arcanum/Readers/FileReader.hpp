#ifndef ENGINE_READERS_FILEREADER_HPP
#define ENGINE_READERS_FILEREADER_HPP

#include <cstddef>
#include <Arcanum/Formats/DataFile.hpp>

namespace arcanum
{
    namespace readers
    {
        class FileReader
        {
        public:
            void open(formats::DataFile* dataFile);
            void close();
            void read(void* dest, size_t bytes);
        private:
            size_t mOffset;
            formats::DataFile* mDataFile;
        };
    }
}

#endif
