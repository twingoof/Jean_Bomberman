/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibTexture
*/

#ifndef RAYLIBTEXTURE_HPP_
#define RAYLIBTEXTURE_HPP_

#include "raylib.h"
#include <memory>
#include <vector>

/**
 * @namespace Raylib
 */
namespace Raylib {

    // Image loading functions
    // NOTE: This functions do not require GPU access

    /**
     * @fn extern "C" Image loadImage(const std::string &fileName)
     * @brief Load image from file into CPU memory (RAM)
     * 
     * @param fileName File path to image
     * @return Image
     */
    extern "C" Image loadImage(const std::string &fileName);

    /**
     * @fn extern "C" Image loadImageRaw(const std::string &fileName, int width, int height, int format, int headerSize)
     * @brief Load image from RAW file data
     * 
     * @param fileName File path to image
     * @param width Image width
     * @param height Image height
     * @param headerSize Image header size
     * @return Image
     */
    extern "C" Image loadImageRaw(const std::string &fileName, int width, int height, int format, int headerSize);

    /**
     * @fn extern "C" Image loadImageAnim(const std::string &fileName, std::unique_ptr<int> frame)
     * @brief Load image sequence from file (frames appended to image.data)
     * 
     * @param fileName File path to image
     * @param frame Number of frame to append
     * @return Image
     */
    extern "C" Image loadImageAnim(const std::string &fileName, std::unique_ptr<int> frame);

    /**
     * @fn extern "C" Image loadImageFromMemory(const std::string &fileType, const std::string &fileData, int dataSize)
     * @brief Load image from memory buffer
     * 
     * @param fileType File type
     * @param fileData Memory buffer containing image
     * @param dataSize Size of the memory buffer
     * @return Image
     */
    extern "C" Image loadImageFromMemory(const std::string &fileType, const std::string &fileData, int dataSize);

    /**
     * @fn extern "C" void UnloadImage(Image image)
     * @brief Unload image from CPU memory (RAM)
     * 
     * @param image Image
     */
    extern "C" void UnloadImage(Image image);

    /**
     * @fn extern "C" bool ExportImage(Image image, const std::string &fileName)
     * @brief Export image data to file
     * 
     * @param image Image to unload from memory
     * @param fileName Path to image
     * @return True
     * @return False
     */
    extern "C" bool ExportImage(Image image, const std::string &fileName);

    /**
     * @fn extern "C" bool ExportImageAsCode(Image image, const std::string &fileName)
     * @brief Export image as code file defining an array of bytes
     * 
     * @param image Image to unload from memory
     * @param fileName Path to image
     * @return True
     * @return False
     */
    extern "C" bool ExportImageAsCode(Image image, const std::string &fileName);

    // Image generation functions

    /**
     * @fn extern "C" Image genImageColor(int width, int height, Color color)
     * @brief Generate image: plain color
     * 
     * @param width Image to unload from memory
     * @param height Image height
     * @param color Plain color
     * @return Image
     */
    extern "C" Image genImageColor(int width, int height, Color color);

    /**
     * @fn extern "C" Image genImageGradientV(int width, int height, Color top, Color bottom)
     * @brief Generate image: vertical gradient
     * 
     * @param width Image width
     * @param height Image height
     * @param top Top color
     * @param bottom Bottom color
     * @return Image
     */
    extern "C" Image genImageGradientV(int width, int height, Color top, Color bottom);

    /**
     * @fn extern "C" Image genImageGradientH(int width, int height, Color left, Color right)
     * @brief Generate image: horizontal gradient
     * 
     * @param width Image width
     * @param height Image height
     * @param left Left color
     * @param right Right color
     * @return Image
     */
    extern "C" Image genImageGradientH(int width, int height, Color left, Color right);

    /**
     * @fn extern "C" Image genImageGradientRadial(int width, int height, float density, Color inner, Color outer)
     * @brief Generate image: radial gradient
     * 
     * @param width Image width
     * @param height Image height
     * @param density Image density
     * @param inner Inner color
     * @param outer Outer color
     * @return Image
     */
    extern "C" Image genImageGradientRadial(int width, int height, float density, Color inner, Color outer);

    /**
     * @fn extern "C" Image genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
     * @brief Generate image: radial gradient
     * 
     * @param width Image width
     * @param height Image height
     * @param checksX Position X to check
     * @param checksY Position Y to check
     * @param col1 First color
     * @param col2 Second color
     * @return Image
     */
    extern "C" Image genImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2);

    /**
     * @fn extern "C" Image genImageWhiteNoise(int width, int height, float factor)
     * @brief Generate image: white noise
     * 
     * @param width Image width
     * @param height Image height
     * @param factor Color factor
     * @return Image
     */
    extern "C" Image genImageWhiteNoise(int width, int height, float factor);

    /**
     * @fn extern "C" Image genImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)
     * @brief Generate image: perlin noise
     * 
     * @param width Image width
     * @param height Image height
     * @param offsetX Position X offset
     * @param offsetY Position Y offset
     * @param scale Scale factor
     * @return Image
     */
    extern "C" Image genImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale);

    /**
     * @fn extern "C" Image genImageCellular(int width, int height, int tileSize)
     * @brief Generate image: cellular algorithm. Bigger tileSize means bigger cells
     * 
     * @param width Image width
     * @param height Image height
     * @param tileSize Tile size
     * @return Image
     */
    extern "C" Image genImageCellular(int width, int height, int tileSize);

    // Image manipulation functions

    /**
     * @fn extern "C" Image imageCopy(Image image);
     * @brief Create an image duplicate (useful for transformations)
     * 
     * @param image Image structure
     * @return Image
     */
    extern "C" Image imageCopy(Image image);

    /**
     * @fn extern "C" Image imageFromImage(Image image, Rectangle rec)
     * @brief Create an image from another image piece
     * 
     * @param image Image structure
     * @param rec Rectangle defining image piece
     * @return Image
     */
    extern "C" Image imageFromImage(Image image, Rectangle rec);

    /**
     * @fn extern "C" Image imageText(const std::string &text, int fontSize, Color color)
     * @brief Create an image from text (default font)
     * 
     * @param text Text to transform to image
     * @param fontSize Font size
     * @param color Image color
     * @return Image
     */
    extern "C" Image imageText(const std::string &text, int fontSize, Color color);

    /**
     * @fn extern "C" Image imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint)
     * @brief Create an image from text (custom sprite font)
     * 
     * @param font Text font
     * @param text Text to transform into image
     * @param fontSize Font size
     * @param spacing Space between each character
     * @param tint Image tint
     * @return Image
     */
    extern "C" Image imageTextEx(Font font, const std::string &text, float fontSize, float spacing, Color tint);

    /**
     * @fn extern "C" void imageFormat(std::unique_ptr<Image> image, int newFormat)
     * @brief Convert image data to desired format
     * 
     * @param image Pointer to an image struct
     * @param newFormat New image format
     */
    extern "C" void imageFormat(std::unique_ptr<Image> image, int newFormat);

    /**
     * @fn extern "C" void imageToPOT(std::unique_ptr<Image> image, Color fill)
     * @brief Convert image to POT (power-of-two)
     * 
     * @param font Text font
     * @param text Text to transform into image
     * @param fontSize Font size
     * @param spacing Space between each character
     * @param tint Image tint
     */
    extern "C" void imageToPOT(std::unique_ptr<Image> image, Color fill);

    /**
     * @fn extern "C" void imageCrop(std::unique_ptr<Image> image, Rectangle crop)
     * @brief Crop an image to a defined rectangle
     * 
     * @param image Pointer to an image struct
     * @param crop Crop rectangle
     */
    extern "C" void imageCrop(std::unique_ptr<Image> image, Rectangle crop);

    /**
     * @fn extern "C" void imageAlphaCrop(std::unique_ptr<Image> image, float threshold)
     * @brief Crop image depending on alpha value
     * 
     * @param image Pointer to an image struct
     * @param threshold Alpha value
     */
    extern "C" void imageAlphaCrop(std::unique_ptr<Image> image, float threshold);

    /**
     * @fn extern "C" void imageAlphaClear(std::unique_ptr<Image> image, Color color, float threshold)
     * @brief Clear alpha channel to desired color
     * 
     * @param image Pointer to an image struct
     * @param color Desired color
     * @param threshold Alpha value
     */
    extern "C" void imageAlphaClear(std::unique_ptr<Image> image, Color color, float threshold);

    /**
     * @fn extern "C" void imageAlphaMask(std::unique_ptr<Image> image, Image alphaMask)
     * @brief Apply alpha mask to image
     * 
     * @param image Pointer to an image struct
     * @param alphaMask Alpha mask
     */
    extern "C" void imageAlphaMask(std::unique_ptr<Image> image, Image alphaMask);

    /**
     * @fn extern "C" void imageAlphaPremultiply(std::unique_ptr<Image> image)
     * @brief Premultiply alpha channel
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageAlphaPremultiply(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageResize(std::unique_ptr<Image> image, int newWidth, int newHeight)
     * @brief Resize image (Bicubic scaling algorithm)
     * 
     * @param image Pointer to an image struct
     * @param newWidth New Image Width
     * @param newHeight New Height Width
     */
    extern "C" void imageResize(std::unique_ptr<Image> image, int newWidth, int newHeight);

    /**
     * @fn extern "C" void imageResizeNN(std::unique_ptr<Image> image, int newWidth,int newHeight)
     * @brief Resize image (Nearest-Neighbor scaling algorithm)
     * 
     * @param image Pointer to an image struct
     * @param newWidth New Image Width
     * @param newHeight New Height Width
     */
    extern "C" void imageResizeNN(std::unique_ptr<Image> image, int newWidth,int newHeight);

    /**
     * @fn extern "C" void imageResizeCanvas(std::unique_ptr<Image> image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
     * @brief Resize canvas and fill with color
     * 
     * @param image Pointer to an image struct
     * @param newWidth New Image Width
     * @param newHeight New Height Width
     * @param offsetX X Axis Offset
     * @param offsetY Y Axis Offset
     * @param fill Color to fill canvas with
     */
    extern "C" void imageResizeCanvas(std::unique_ptr<Image> image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill);

    /**
     * @fn extern "C" void imageMipmaps(std::unique_ptr<Image> image)
     * @brief Generate all mipmap levels for a provided image
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageMipmaps(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageDither(std::unique_ptr<Image> image, int rBpp, int gBpp, int bBpp, int aBpp)
     * @brief Dither image data to 16bpp or lower (Floyd-Steinberg dithering)
     * 
     * @param image Pointer to an image struct
     * @param rBpp Red color value
     * @param gBpp Green color value
     * @param bBpp Blue color value
     * @param aBpp
     */
    extern "C" void imageDither(std::unique_ptr<Image> image, int rBpp, int gBpp, int bBpp, int aBpp);

    /**
     * @fn extern "C" void imageFlipVertical(std::unique_ptr<Image> image)
     * @brief Flip image vertically
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageFlipVertical(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageFlipHorizontal(std::unique_ptr<Image> image)
     * @brief Flip image horizontally
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageFlipHorizontal(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageRotateCW(std::unique_ptr<Image> image)
     * @brief Flip image horizontally
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageRotateCW(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageRotateCCW(std::unique_ptr<Image> image)
     * @brief Rotate image counter-clockwise 90deg
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageRotateCCW(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageColorTint(std::unique_ptr<Image> image, Color color)
     * @brief Modify image color: tint
     * 
     * @param image Pointer to an image struct
     * @param color New color tint
     */
    extern "C" void imageColorTint(std::unique_ptr<Image> image, Color color);

    /**
     * @fn extern "C" void imageColorInvert(std::unique_ptr<Image> image)
     * @brief Modify image color: invert
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageColorInvert(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageColorGrayscale(std::unique_ptr<Image> image)
     * @brief Modify image color: grayscale
     * 
     * @param image Pointer to an image struct
     */
    extern "C" void imageColorGrayscale(std::unique_ptr<Image> image);

    /**
     * @fn extern "C" void imageColorContrast(std::unique_ptr<Image> image, float contrast)
     * @brief Modify image color: contrast (-100 to 100)
     * 
     * @param image Pointer to an image struct
     * @param constrast Constrast value
     */
    extern "C" void imageColorContrast(std::unique_ptr<Image> image, float contrast);

    /**
     * @fn extern "C" void imageColorBrightness(std::unique_ptr<Image> image, int brightness)
     * @brief Modify image color: brightness (-255 to 255)
     * 
     * @param image Pointer to an image struct
     * @param brightness Brightness value
     */
    extern "C" void imageColorBrightness(std::unique_ptr<Image> image, int brightness);

    /**
     * @fn extern "C" void imageColorReplace(std::unique_ptr<Image> image, Color color, Color replace)
     * @brief Modify image color: replace color
     * 
     * @param image Pointer to an image struct
     * @param color Color to replace
     * @param replace Color that'll replace
     */
    extern "C" void imageColorReplace(std::unique_ptr<Image> image, Color color, Color replace);

    /**
     * @fn extern "C" std::unique_ptr<Color> loadImageColors(Image image)
     * @brief Load color data from image as a Color array (RGBA - 32bit)
     * 
     * @param image Pointer to an image struct
     */
    extern "C" std::unique_ptr<Color> loadImageColors(Image image);

    /**
     * @fn extern "C" std::unique_ptr<Color> loadImagePalette(Image image, int maxPaletteSize, std::unique_ptr<int> colorsCount)
     * @brief Load colors palette from image as a Color array (RGBA - 32bit)
     * 
     * @param image Pointer to an image struct
     * @param maxPaletteSize Number of color defining color palette
     * @param colorsCount Number of color to load into palette
     */
    extern "C" std::unique_ptr<Color> loadImagePalette(Image image, int maxPaletteSize, std::unique_ptr<int> colorsCount);

    /**
     * @fn extern "C" void unloadImageColors(std::vector<Color> colors)
     * @brief Unload color data loaded with LoadImageColors()
     * 
     * @param colors Colors to unload
     */
    extern "C" void unloadImageColors(std::vector<Color> colors);

    /**
     * @fn extern "C" void unloadImagePalette(std::vector<Color> colors)
     * @brief Unload colors palette loaded with LoadImagePalette()
     * 
     * @param colors Colors to unload
     */
    extern "C" void unloadImagePalette(std::vector<Color> colors);

    /**
     * @fn extern "C" Rectangle getImageAlphaBorder(Image image, float threshold)
     * @brief Get image alpha border rectangle
     * 
     * @param image Image struct
     * @param threshold Alpha value
     */
    extern "C" Rectangle getImageAlphaBorder(Image image, float threshold);

    // Image drawing functions
    // NOTE: Image software-rendering functions (CPU)

    /**
     * @fn extern "C" void imageClearBackground(std::unique_ptr<Image> dst, Color color)
     * @brief Clear image background with given color
     * 
     * @param dst Pointer to an image struct
     * @param color Color to clear Background with
     */
    extern "C" void imageClearBackground(std::unique_ptr<Image> dst, Color color);

    /**
     * @fn extern "C" void imageDrawPixel(std::unique_ptr<Image> dst, int posX, int posY, Color color)
     * @brief Draw pixel within an image
     * 
     * @param dst Pointer to an image struct
     * @param posX X pixel's position
     * @param posY Y pixel's position
     * @param color Pixel's color
     */
    extern "C" void imageDrawPixel(std::unique_ptr<Image> dst, int posX, int posY, Color color);

    /**
     * @fn extern "C" void imageDrawPixelV(std::unique_ptr<Image> dst, Vector2 position, Color color)
     * @brief Draw pixel within an image (Vector version)
     * 
     * @param dst Pointer to an image struct
     * @param position Vector of 2 float defining the pixel position
     * @param color Pixel's color
     */
    extern "C" void imageDrawPixelV(std::unique_ptr<Image> dst, Vector2 position, Color color);

    /**
     * @fn extern "C" void imageDrawLine(std::unique_ptr<Image> dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
     * @brief Draw line within an image
     * 
     * @param dst Pointer to an image struct
     * @param startPosX Position X of the line's start point
     * @param startPosY Position Y of the line's start point
     * @param endPosX Position X of the line's end point
     * @param endPosY Position Y of the line's end point
     * @param color Line's color
     */
    extern "C" void imageDrawLine(std::unique_ptr<Image> dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color);


    /**
     * @fn extern "C" void imageDrawLineV(std::unique_ptr<Image> dst, Vector2 start, Vector2 end, Color color)
     * @brief Draw line within an image (Vector version)
     * 
     * @param dst Pointer to an image struct
     * @param start Position X and Y of the line's start point
     * @param end Position X and Y of the line's end point
     * @param color Line's color
     */
    extern "C" void imageDrawLineV(std::unique_ptr<Image> dst, Vector2 start, Vector2 end, Color color);

    /**
     * @fn extern "C" void imageDrawCircle(std::unique_ptr<Image> dst, int centerX, int centerY, int radius, Color color)
     * @brief Draw circle within an image
     * 
     * @param dst Pointer to an image struct
     * @param centerX Position X of the circle's center point
     * @param centerY Position Y of the circle's center point
     * @param radius Circle radius
     * @param color Line's color
     */
    extern "C" void imageDrawCircle(std::unique_ptr<Image> dst, int centerX, int centerY, int radius, Color color);

    /**
     * @fn extern "C" void imageDrawCircleV(std::unique_ptr<Image> dst, Vector2 center, int radius, Color color)
     * @brief Draw circle within an image (Vector version)
     * 
     * @param dst Pointer to an image struct
     * @param center Position X and Y of the circle's center point
     * @param radius Circle radius
     * @param color Line's color
     */
    extern "C" void imageDrawCircleV(std::unique_ptr<Image> dst, Vector2 center, int radius, Color color);

    /**
     * @fn extern "C" void imageDrawRectangle(std::unique_ptr<Image> dst, int posX, int posY, int width, int height, Color color)
     * @brief Draw rectangle within an image
     * 
     * @param dst Pointer to an image struct
     * @param posX Position X of the rectangle's left corner
     * @param posY Position Y of the rectangle's left corner
     * @param width Rectangle's width
     * @param height Rectangle's height
     * @param color Rectangle's color
     */
    extern "C" void imageDrawRectangle(std::unique_ptr<Image> dst, int posX, int posY, int width, int height, Color color);

    /**
     * @fn extern "C" void imageDrawRectangleV(std::unique_ptr<Image> dst, Vector2 position, Vector2 size, Color color)
     * @brief Draw rectangle within an image (Vector version)
     * 
     * @param dst Pointer to an image struct
     * @param position Position X and Y of the rectangle's left corner point
     * @param size Vector of float defining rectangle Height and Width
     * @param color Rectangle's color
     */
    extern "C" void imageDrawRectangleV(std::unique_ptr<Image> dst, Vector2 position, Vector2 size, Color color);

    /**
     * @fn extern "C" void imageDrawRectangleRec(std::unique_ptr<Image> dst, Rectangle rec, Color color)
     * @brief Draw rectangle within an image
     * 
     * @param dst Pointer to an image struct
     * @param position Position X and Y of the rectangle's left corner point
     * @param size Vector of float defining rectangle Height and Width
     * @param color Rectangle's color
     * @param color Pixel's color
     */
    extern "C" void imageDrawRectangleRec(std::unique_ptr<Image> dst, Rectangle rec, Color color);

    /**
     * @fn extern "C" void imageDrawRectangleLines(std::unique_ptr<Image> dst, Rectangle rec, int thick, Color color)
     * @brief Draw rectangle lines within an image
     * 
     * @param dst Pointer to an image struct
     * @param rec Rectangle to draw into image
     * @param thick Retangle lines thickness
     * @param color Retangle line's color
     */
    extern "C" void imageDrawRectangleLines(std::unique_ptr<Image> dst, Rectangle rec, int thick, Color color);

    /**
     * @fn extern "C" void imageDraw(std::unique_ptr<Image> dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
     * @brief Draw a source image within a destination image (tint applied to source)
     * 
     * @param dst Pointer to an image struct
     * @param src Source image to draw inside dst
     * @param srcRec Source image rectangle
     * @param dstRec Destination image rectangle
     * @param tint Image's tint
     */
    extern "C" void imageDraw(std::unique_ptr<Image> dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint);

    /**
     * @fn extern "C" void imageDrawText(std::unique_ptr<Image> dst, const std::string &text, int posX, int posY, int fontSize, Color color)
     * @brief Draw text (using default font) within an image (destination)
     * 
     * @param dst Pointer to an image struct
     * @param text Text to draw within an image
     * @param posX Text's X position
     * @param posY Text's X position
     * @param fontSize Text's font size
     * @param color Text's color
     */
    extern "C" void imageDrawText(std::unique_ptr<Image> dst, const std::string &text, int posX, int posY, int fontSize, Color color);

    /**
     * @fn extern "C" void imageDrawTextEx(std::unique_ptr<Image> dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
     * @brief Draw text (custom sprite font) within an image (destination)
     * 
     * @param dst Pointer to an image struct
     * @param font Text font
     * @param text Text to draw in image
     * @param position Vector of X and Y text's position
     * @param fontSize Text font size
     * @param tint Text's tint
     */
    extern "C" void imageDrawTextEx(std::unique_ptr<Image> dst, Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint);

    // Texture loading functions
    // NOTE: These functions require GPU access

    /**
     * @fn extern "C" Texture2D loadTexture(const std::string &fileName)
     * @brief Load texture from file into GPU memory (VRAM)
     * 
     * @param fileName Path to texture
     * @return Texture2D structure containing texture
     */
    extern "C" Texture2D loadTexture(const std::string &fileName);

    /**
     * @fn extern "C" Texture2D loadTextureFromImage(Image image)
     * @brief Load texture from image data
     * 
     * @param image Image to load texture from
     * @return Texture2D structure containing texture
     */
    extern "C" Texture2D loadTextureFromImage(Image image);

    /**
     * @fn extern "C" TextureCubemap loadTextureCubemap(Image image, int layout)
     * @brief Load cubemap from image, multiple image cubemap layouts supported
     * 
     * @param image Image to load texture from
     * @param layout Number of texture layouts
     * @return Texture2D structure containing texture
     */
    extern "C" TextureCubemap loadTextureCubemap(Image image, int layout);

    /**
     * @fn extern "C" RenderTexture2D loadRenderTexture(int width, int height)
     * @brief Load texture for rendering (framebuffer)
     * 
     * @param width Texture width
     * @param height Texture height
     * @return RenderTexture2D structure containing texture
     */
    extern "C" RenderTexture2D loadRenderTexture(int width, int height);

    /**
     * @fn extern "C" void unloadTexture(Texture2D texture)
     * @brief Unload texture from GPU memory (VRAM)
     * 
     * @param texture Texture to unload
     */
    extern "C" void unloadTexture(Texture2D texture);

    /**
     * @fn extern "C" void unloadRenderTexture(RenderTexture2D target)
     * @brief Unload render texture from GPU memory (VRAM)
     * 
     * @param target Texture to unload
     */
    extern "C" void unloadRenderTexture(RenderTexture2D target);

    // /**
    //  * @brief Update GPU texture with new data
    //  * @param texture Texture to update
    //  * @param pixels Pixels to update
    //  */
    // extern "C" void updateTexture(Texture2D texture, const void *pixels);

    // /**
    //  * @brief Update GPU texture rectangle with new data
    //  * @param texture Texture width
    //  * @param rec Texture height
    //  * @param pixels Pixels to update
    //  */
    // extern "C" void updateTextureRec(Texture2D texture, Rectangle rec, const void *pixels);

    /**
     * @fn extern "C" Image getTextureData(Texture2D texture)
     * @brief Get pixel data from GPU texture and return an Image
     * 
     * @param texture Texture width
     * @return Image
     */
    extern "C" Image getTextureData(Texture2D texture);

    /**
     * @fn extern "C" Image getScreenData(void);
     * @brief Get pixel data from screen buffer and return an Image (screenshot)
     * 
     * @param texture Texture width
     * @return Image
     */
    extern "C" Image getScreenData(void);

    // Texture configuration functions

    /**
     * @fn extern "C" void genTextureMipmaps(std::unique_ptr<Texture2D> texture)
     * @brief Generate GPU mipmaps for a texture
     * 
     * @param texture 2DTexture to convert to Texture mipmap
     */
    extern "C" void genTextureMipmaps(std::unique_ptr<Texture2D> texture);

    /**
     * @brief Set texture scaling filter mode
     * @param texture 2DTexture to convert to Texture mipmap
     * @param filter Filter type
     */
    extern "C" void setTextureFilter(Texture2D texture, int filter);

    /**
     * @brief Set texture wrapping mode
     * @param texture 2DTexture to convert to Texture mipmap
     * @param wrap Wrap value
     */
    extern "C" void setTextureWrap(Texture2D texture, int wrap);

    // Texture drawing functions

    /**
     * @brief Draw a Texture2D
     * @param texture Texture to draw
     * @param posX X Texture's Position
     * @param posY Y Texture's Position
     * @param tint Texture's tint
     */
    extern "C" void drawTexture(Texture2D texture, int posX, int posY, Color tint);

    /**
     * @brief Draw a Texture2D with position defined as Vector2
     * @param texture Texture to draw
     * @param position Texture's position defined as Vector2
     * @param tint Texture's tint
     */
    extern "C" void drawTextureV(Texture2D texture, Vector2 position, Color tint);

    /**
     * @brief Draw a Texture2D with extended parameters
     * @param texture Texture to draw
     * @param position Texture's position defined as Vector2
     * @param rotation Rotation degree
     * @param scale Scale factor
     * @param tint Texture's tint
     */
    extern "C" void drawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint);

    /**
     * @brief Draw a part of a texture defined by a rectangle
     * @param texture Texture to draw
     * @param source Rectangle defining a part of texture
     * @param position Texture's position defined as Vector2
     * @param tint Texture's tint
     */
    extern "C" void drawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint);

    /**
     * @brief Draw texture quad with tiling and offset parameters
     * @param texture Texture to draw
     * @param tiling
     * @param offset Offset value for X and Y position
     * @param quad Rectangle defining the texture
     * @param tint Texture's tint
     */
    extern "C" void drawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint);

    /**
     * @brief Draw part of a texture (defined by a rectangle) with rotation and scale tiled into dest.
     * @param texture Texture to draw
     * @param source Rectangle defining a part of texture
     * @param dest Destination rectangle
     * @param origin Vector of origin positions
     * @param rotation Rotation degree
     * @param scale Scale factor
     * @param tint Texture's tint
     */
    extern "C" void drawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint);

    /**
     * @brief Draw a part of a texture defined by a rectangle with 'pro' parameters
     * @param source Rectangle defining a part of texture
     * @param dest Destination rectangle
     * @param origin Vector of origin positions
     * @param rotation Rotation degree
     * @param tint Texture's tint
     */
    extern "C" void drawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint);

    /**
     * @brief Draws a texture (or part of it) that stretches or shrinks nicely
     * @param texture Texture to draw
     * @param nPatchInfo
     * @param dest Destination rectangle
     * @param origin Vector of origin positions
     * @param rotation Rotation degree
     * @param tint Texture's tint
     */
    extern "C" void drawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint);

    /**
     * @brief Draw a textured polygon
     * @param texture Texture to draw
     * @param center Vector of 2 float defining the polygon center
     * @param points Vector of points
     * @param texCoords Coordinates sides
     * @param pointsCount Number of polygon's point
     * @param tint Polygon's tint
     */
    extern "C" void drawTexturePoly(Texture2D texture, Vector2 center, std::vector<Vector2> points, std::vector<Vector2> texcoords, int pointsCount, Color tint);

    // Color/pixel related functions

    /**
     * @brief Returns color with alpha applied, alpha gLoad texture for rendering (framebuffer)oes from 0.0f to 1.0f
     * @param color Color to fade
     * @param alpha Alpha factor
     * @return Faded color
     */
    extern "C" Color fade(Color color, float alpha);

    /**
     * @brief Returns hexadecimal value for a Color
     * @param color Color to transpose into int
     * @return Hexadecimal value for color
     */
    extern "C" int colorToInt(Color color);

    /**
     * @brief Returns Color normalized as float [0..1]
     * @param color Color to normalize
     * @return Vetor of 4 floats defining the color
     */
    extern "C" Vector4 colorNormalize(Color color);

    /**
     * @brief Returns Color from normalized values [0..1]
     * @param normalized Vector to denormalized
     * @return Color from normalized values
     */
    extern "C" Color colorFromNormalized(Vector4 normalized);

    /**
     * @brief Returns HSV values for a Color, hue [0..360], saturation/value [0..1]
     * @param color Color to HSV
     * @return Vector of 3 floats defining HSV Color
     */
    extern "C" Vector3 colorToHSV(Color color);

    /**
     * @brief Returns a Color from HSV values, hue [0..360], saturation/value [0..1]
     * @param hue H value
     * @param saturation S value
     * @param value V value
     * @return Color
     */
    extern "C" Color colorFromHSV(float hue, float saturation, float value);

    /**
     * @brief Returns color with alpha applied, alpha goes from 0.0f to 1.0f
     * @param color Base color
     * @param alpha Alpha value to set
     * @return Color
     */
    extern "C" Color colorAlpha(Color color, float alpha);

    /**
     * @brief Returns src alpha-blended into dst color with tint
     * @param dst Color
     * @param src Color to blend
     * @param tint Color
     * @return Final Color
     */
    extern "C" Color colorAlphaBlend(Color dst, Color src, Color tint);

    /**
     * @brief Get Color structure from hexadecimal value
     * @param hexValue Hexadecimal value
     * @return Color
     */
    extern "C" Color getColor(int hexValue);

    // /**
    //  * @brief Get Color from a source pixel pointer of certain format
    //  * @param srcPtr
    //  * @param format Format value
    //  * @return Color
    //  */
    // extern "C" Color GetPixelColor(void *srcPtr, int format);

    /**
     * @brief Set color formatted into destination pixel pointer
     * @param dstPtr Pixel's data pointer
     * @param color Pixel color
     * @param format Format value
     */
    extern "C" void setPixelColor(void *dstPtr, Color color, int format);

    /**
     * @brief Get pixel data size in bytes for certain format
     * @param width Pixel data width
     * @param height Pixel data height
     * @param format Data format
     * @return Returns Pixel Data size
     */
    extern "C" int getPixelDataSize(int width, int height, int format);

};

#endif /* !RAYLIBTEXTURE_HPP_ */
