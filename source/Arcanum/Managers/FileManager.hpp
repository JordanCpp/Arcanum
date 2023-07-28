#ifndef ENGINE_MANAGERS_FILEMANAGER_HPP
#define ENGINE_MANAGERS_FILEMANAGER_HPP

#include <Arcanum/Readers/DatReader.hpp>
#include <Arcanum/Loaders/DatLoader.hpp>

namespace arcanum
{
    namespace managers
    {
        class FileManager
        {
        public:
            FileManager();
            formats::DataFile* getFile(const std::string& path);
        private:
            readers::DatList   mDatList;
            readers::DatReader mDatReader;
            loaders::DatLoader mDatLoader;
            formats::DataFile  mResult;
        };
    }
}

#endif
