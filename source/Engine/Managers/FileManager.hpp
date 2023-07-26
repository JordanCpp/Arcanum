#ifndef ENGINE_MANAGERS_FILEMANAGER_HPP
#define ENGINE_MANAGERS_FILEMANAGER_HPP

#include <Engine/Readers/DatReader.hpp>
#include <Engine/Loaders/DatLoader.hpp>

namespace engine
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
