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
			uint8_t* Pixels();
			size_t Frames();
			void Frame(size_t index);
		private:
			Formats::ArtFile _File;
			Graphics::Point _Size;
			Graphics::Point _Offset;
			Graphics::Point _Delta;
			std::vector<uint8_t> _Pixels;
		};
	}
}

#endif    