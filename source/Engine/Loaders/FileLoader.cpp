#include <Engine/Loaders/FileLoader.hpp>
#include <exception>

using namespace engine::loaders;
using namespace engine::formats;

void FileLoader::reset(const std::string& path, DataFile* dataFile)
{
    mInput.open(path.c_str(), std::ios::binary);

    if (!mInput.is_open())
        throw std::runtime_error("Not found file: " + path);

    mInput.seekg(0, std::ios::end);

    std::streampos length(mInput.tellg());

    mInput.seekg(0, std::ios::beg);

    size_t bytes = (size_t)length;

    dataFile->getContent().resize(bytes);

    mInput.read((char*)dataFile->getContent().data(), bytes);

    mInput.close();
}
