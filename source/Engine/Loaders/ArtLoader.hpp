#ifndef _Engine_Loaders_ArtLoader_hpp_
#define _Engine_Loaders_ArtLoader_hpp_

#include <Engine/Formats/Art.hpp>
#include <Engine/Graphics/Point.hpp>
#include <Engine/Readers/FileReader.hpp>

namespace Engine
{
	namespace Loaders
	{
		class ArtLoader
		{
		public:
			void Load(Readers::FileReader* fileReader);
			const Graphics::Point& getSize();
			const Graphics::Point& getOffset();
			const Graphics::Point& getDelta();
			uint8_t* getPixels();
			size_t getFrames();
			void frame(size_t index);
		private:
			Formats::ArtFile mFile;
			Graphics::Point mSize;
			Graphics::Point mOffset;
			Graphics::Point mDelta;
			std::vector<uint8_t> mPixels;
		};
	}
}

#endif    