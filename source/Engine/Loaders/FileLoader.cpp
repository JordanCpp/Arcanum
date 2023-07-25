#include <Engine/Loaders/FileLoader.hpp>
#include <exception>

using namespace Engine::Loaders;
using namespace Engine::Formats;

void FileLoader::Reset(const std::string& path, DataFile* dataFile)
{
    Input.open(path.c_str(), std::ios::binary);

    if (!Input.is_open())
        throw std::runtime_error("Not found file: " + path);

    Input.seekg(0, std::ios::end);

    std::streampos length(Input.tellg());

    Input.seekg(0, std::ios::beg);

    size_t bytes = (size_t)length;

    dataFile->getContent().resize(bytes);

    Input.read((char*)dataFile->getContent().data(), bytes);

    Input.close();
}
