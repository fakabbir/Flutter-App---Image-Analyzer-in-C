struct imageResult{
uint32_t *image;
int result;
};

struct imageResult convertImage(uint8_t *plane0, uint8_t *plane1, uint8_t *plane2,
                                int bytesPerRow, int bytesPerPixel, int width, int height);
