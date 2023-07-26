#ifndef _Engine_Graphics_Sprite_hpp_
#define _Engine_Graphics_Sprite_hpp_

#include <Engine/Graphics/Image.hpp>
#include <vector>

namespace engine
{
	namespace graphics
	{
		class Sprite
		{
		public:
			~Sprite();
			void append(Image* image);
			Image* getImage(size_t index);
			Image* single();
			size_t getFrames();
		private:
			std::vector<Image*> mImages;
		};
	}
}

#endif    