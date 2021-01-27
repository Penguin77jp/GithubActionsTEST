#include <iostream>
// #define STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_WRITE_IMPLEMENTATION
#include "stb_image_write.h"
#include <vector>

int main()
{
    std::vector<unsigned char> data(100 * 100 * 3, 255);
    stbi_write_png(data.data(), 100, 100, 3);
    std::cout << "Hello World" << std::endl;
    return 0;
}