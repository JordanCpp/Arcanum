#include <Engine/Managers/FileManager.hpp>
#include <Engine/Loaders/FileLoader.hpp>
#include <filesystem>
#include <iostream>

using namespace Engine::Managers;
using namespace Engine::Formats;
using namespace Engine::Loaders;

FileManager::FileManager() :
	DatLoader(&DatList)
{	
	for (auto const& i : std::filesystem::directory_iterator{ std::filesystem::current_path()})
	{
		if (i.path().extension() == ".dat")
		{
			DatReader.Reset(i.path().generic_string(), DatList);
		}
	}
}

DataFile* FileManager::getFile(const std::string& path)
{
	const std::string pathFile = "data/" + path;

	if (!std::filesystem::exists(pathFile))
	{
		if (!DatLoader.getFile(path, &Result))
			throw std::runtime_error("Can't open file: " + path);
	}
	else
	{
		FileLoader loader;

		loader.Reset(pathFile, &Result);
	}

	return &Result;
}
