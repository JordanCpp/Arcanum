/* 
     ArtConverter by Alexey Stremov https://github.com/AxelStrem/ArtConverter/blob/master/artconverter.cpp
         Refactored for OpenArcanum https://github.com/OpenArcanum/artviewer 
*/

#ifndef ARCANUM_FORMATS_ART_HPP
#define ARCANUM_FORMATS_ART_HPP

#include <Arcanum/Readers/FileReader.hpp>
#include <string>

namespace arcanum
{
	namespace formats
	{
		struct MissingFile
		{
			std::string filename;
		};

		struct ArtColor
		{
			ArtColor();
			uint8_t b;
			uint8_t	g;
			uint8_t	r;
			uint8_t	a;
		};

		inline bool in_palette(ArtColor col)
		{
			return (col.a | col.b | col.g | col.r) != 0;
		}

		struct ArtTable
		{
			ArtColor colors[256];
		};

		struct ArtHeader
		{
			uint32_t h0[3] = { 0 };
			ArtColor stupid_color[4];

			uint32_t frame_num_low = 0;
			uint32_t frame_num     = 0;

			ArtColor palette_data1[8];
			ArtColor palette_data2[8];
			ArtColor palette_data3[8];
		};

		struct ArtFrameHeader
		{
			ArtFrameHeader();
			uint32_t width;
			uint32_t height;
			uint32_t size;
			int c_x;
			int c_y;
			int d_x;
			int d_y;
		};

		struct ArtFrame
		{
			ArtFrameHeader header;
			std::vector<char> data;
			std::vector<uint8_t> pixels;
			int px = 0;
			int py = 0;

			bool Inc();
			void Dec();
			void Reset();
			bool EOD();

			size_t index(size_t x, size_t y);

			ArtFrameHeader& getHeader() { return header; }
			void loadHeader(readers::FileReader* source);

			void load(readers::FileReader* source);

			uint8_t getValue(size_t x, size_t y);
			void setValue(int x, int y, uint8_t ch);
			void setSize(int w, int h);
			void decode();
		};

		struct ArtFile
		{
			ArtHeader header;
			std::vector<ArtFrame> frame_data;
			std::vector<ArtTable> palette_data;

			int palettes  = { 0 };
			int frames    = { 0 };
			int key_frame = { 0 };
			bool animated = { 0 };

			void loadArt(readers::FileReader* source);
		};
	}
}

#endif
