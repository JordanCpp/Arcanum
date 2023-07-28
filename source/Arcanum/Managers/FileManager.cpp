#include <Arcanum/Managers/FileManager.hpp>
#include <Arcanum/Loaders/FileLoader.hpp>
#include <filesystem>
#include <iostream>

using namespace arcanum::managers;
using namespace arcanum::formats;
using namespace arcanum::loaders;

FileManager::FileManager() :
	mDatLoader(&mDatList)
{	
	for (auto const& i : std::filesystem::directory_iterator{ std::filesystem::current_path()})
	{
		if (i.path().extension() == ".dat")
		{
			mDatReader.reset(i.path().generic_string(), mDatList);
		}
	}
}

DataFile* FileManager::getFile(const std::string& path)
{
	const std::string pathFile = "data/" + path;

	if (!std::filesystem::exists(pathFile))
	{
		if (!mDatLoader.getFile(path, &mResult))
			throw std::runtime_error("Can't open file: " + path);
	}
	else
	{
		FileLoader loader;

		loader.reset(pathFile, &mResult);
	}

	return &mResult;
}
