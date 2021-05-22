/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** Raylib
*/

#ifndef RAYLIB_HPP_
#define RAYLIB_HPP_

#include "raylib.h"
#include <vector>
#include <string>

/**
 * @namespace Raylib
 */
namespace Raylib {

    // Font loading/unloading functions

    /**
     * @brief Get the default Font.
     * @return Default font
     */
    extern "C" Font getFontDefault(void);

    /**
     * @brief Load font from file into GPU memory (VRAM).
     * @param filename Path to font file
     * @return Font loaded
     */
    extern "C" Font loadFont(const std::string &filename);

    /**
     * @brief Load font from file with extended parameters.
     * @param filename Path to font file
     * @param fontSize Font size
     * @param fontChars
     * @param charsCount Number of characters to load
     * @return Font loaded
     */
    extern "C" Font loadFontEx(const std::string &fileName, int fontSize, std::vector<int> fontChars, int charsCount);

    /**
     * @brief Load font from Image (XNA style).
     * @param image Image struct to analyze
     * @param key Color of the font
     * @param charsCount Number of characters to load
     * @return Font loaded
     */
    extern "C" Font loadFontFromImage(Image image, Color key, int firstChar);

    /**
     * @brief Load font from memory buffer.
     * @param fileType File type
     * @param fileData fileData
     * @param dataSize Size of file data
     * @param fontSize Font size to set
     * @param fontChars
     * @param charsCount Number of chars to load
     * @return Font loaded
     */
    extern "C" Font loadFontFromMemory(const std::string &fileType, const std::string &fileData, int dataSize, int fontSize, std::vector<int> fontChars, int charsCount);

    /**
     * @brief Unload Font from GPU memory (VRAM).
     * @param font Font to unload
     */
    extern "C" void unloadFont(Font font);

    // Text drawing functions

    /**
     * @brief Draw current FPS.
     * @param posX Position X to draw
     * @param posY Position Y to draw
     */
    extern "C" void drawFPS(int posX, int posY);

    /**
     * @brief Draw text (using default font).
     * @param text Text to draw
     * @param posX Position X to draw
     * @param posY Position Y to draw
     * @param fontSize Size of the font character
     * @param color Text's color to draw
     */
    extern "C" void drawText(const std::string &text, int posX, int posY, int fontSize, Color color);

    /**
     * @brief Draw text using font and additional parameters.
     * @param font Text font to set
     * @param text Text to draw
     * @param position Vector defining text position to draw
     * @param fontSize Size of the font character
     * @param spacing Spacing between each character
     * @param tint Text's color to draw
     */
    extern "C" void drawTextEx(Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint);

    /**
     * @brief Draw text using font inside rectangle limits.
     * @param font Text font to set
     * @param text Text to draw
     * @param rec Rectangle where the text must be draw
     * @param fontSize Size of the font character
     * @param spacing Spacing between each character
     * @param wordWrap Should the text be wrapped?
     * @param tint Text's color to draw
     */
    extern "C" void drawTextRec(Font font, const std::string &text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint);

    /**
     * @brief Draw text using font inside rectangle limits with support for text selection.
     * @param font Text font to set
     * @param text Text to draw
     * @param rec Rectangle where the text must be draw
     * @param fontSize Size of the font character
     * @param spacing Spacing between each character
     * @param wordWrap Should the text be wrapped?
     * @param tint Text's color to draw
     * @param selectStart Start of the selection effect
     * @param selectLength Selection effect length
     * @param selectTint Selection effect tint
     * @param selectBackTint Selection back effect tint
     */
    extern "C" void drawTextRecEx(Font font, const std::string &text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint,
                         int selectStart, int selectLength, Color selectTint, Color selectBackTint);

    /**
     * @brief Draw one character (codepoint).
     * @param font Text font to set
     * @param codepoint Character ascii value
     * @param position Vector defining text position to draw
     * @param fontSize Size of the font character
     * @param tint Character's color to draw
     */
    extern "C" void drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint);

    // Text misc. functions

    /**
     * @brief Measure string width for default font.
     * @param text Text to measure
     * @param fontSize Size of the font character
     * @return Text width
     */
    extern "C" int measureText(const std::string &text, int fontSize);

    /**
     * @brief Measure string size for Font.
     * @param font Text font
     * @param text Text to measure
     * @param fontSize Size of the font character
     * @param spacing Width between 2 characters
     * @return Text height and width under Vector2 type
     */
    extern "C" Vector2 measureTextEx(Font font, const std::string &text, float fontSize, float spacing);

    /**
     * @brief Get index position for a unicode character on font.
     * @param font Text font
     * @param codepoint Character's ASCII value
     * @return Index position for a unicode character on font
     */
    extern "C" int getGlyphIndex(Font font, int codepoint);

    // Text strings management functions (no utf8 strings, only byte chars)
    // NOTE: Some strings allocate memory internally for returned strings, just be careful!

    /**
     * @brief Copy one string to another.
     * @param dst Destination string
     * @param src Source string
     * @return Number of bytes copied in dst
     */
    extern "C" int textCopy(std::string &dst, const std::string &src);

    /**
     * @brief Check if two text string are equal.
     * @param text1 First string
     * @param text2 Second string
     * @return True if strings are the same, False otherwise
     */
    extern "C" bool textIsEqual(const std::string &text1, const std::string &text2);

    /**
     * @brief Get text length, checks for '\0' ending.
     * @param text Text to get length
     * @return Positive string size
     */
    extern "C" unsigned int textLength(const std::string &text);

    /**
     * @brief Text formatting with variables (sprintf style).
     * @param text Text to format
     * @return Formated text from first parameter
     */
    extern "C" const std::string &textFormat(const std::string &text, ...);

    /**
     * @brief Get a piece of a text string.
     * @param text Text
     * @param position Beginning subtext position
     * @param length Subtext length
     * @return Subtext
     */
    extern "C" const std::string &textSubtext(const std::string &text, int position, int length);

    /**
     * @brief Replace text string (memory must be freed!).
     * @param text Text
     * @param replace String of character to be replace
     * @param by String of character that will replace
     * @return Final string with replaced characters
     */
    extern "C" std::string textReplace(std::string &text, const std::string &replace, const std::string &by);

    /**
     * @brief Insert text in a position (memory must be freed!).
     * @param text Text
     * @param insert Characters to insert
     * @param position String position where to insert characters
     * @return Final string with inserted characters
     */
    extern "C" std::string textInsert(const std::string &text, const std::string &insert, int position);

    /**
     * @brief Join text strings with delimiter.
     * @param textList Text list to join
     * @param count Number of text to join
     * @param delimiter String of all delimiter characters
     * @return Final string joined with every string of textList
     */
    extern "C" const std::string &textJoin(std::vector<std::string> textList, int count, const std::string &delimiter);

    /**
     * @brief Split text into multiple strings.
     * @param text Text to split
     * @param delimiter Character designed as delimiter
     * @param count
     * @return Vector of splited strings
     */
    extern "C" const std::vector<std::string>textSplit(const std::string &text, char delimiter, std::vector<int> count);

    /**
     * @brief Append text at specific position and move cursor!
     * @param text Text
     * @param append String to append to text paramter
     * @param position Specific position to append at
     * @return Vector of splited strings
     */
    extern "C" void textAppend(std::string &text, const std::string &append, std::vector<int> position);

    /**
     * @brief Find first text occurrence within a string.
     * @param text Text
     * @param find String to find in first text
     * @return Index of the find string
     */
    extern "C" int textFindIndex(const std::string &text, const std::string &find);

    /**
     * @brief Get upper case version of provided string.
     * @param text Text to transform into uppercase letter
     * @return Uppercase string
     */
    extern "C" const std::string &textToUpper(const std::string &text);

    /**
     * @brief Get lower case version of provided string.
     * @param text Text to transform into lowercase letter
     * @return Lowercase string
     */
    extern "C" const std::string &textToLower(const std::string &text);

    /**
     * @brief Get Pascal case notation version of provided string.
     * @param text Text to transform into Pascal case notation
     * @return Pascal case notation string
     */
    extern "C" const std::string &textToPascal(const std::string &text);

    /**
     * @brief Get integer value from text (negative values not supported).
     * @param text Text to transform into integer
     * @return Interger value from string
     */
    extern "C" int textToInteger(const std::string &text);

    // UTF8 text strings management functions

    /**
     * @brief Get total number of characters (codepoints) in a UTF8 encoded string.
     * @param text Text
     * @return Codepoints Count
     */
    extern "C" int getCodepointsCount(const std::string &text);

    // std::string &textToUtf8(int *codepoints, int length); - Encode text codepoint into utf8 text (memory must be freed!)
    // int *GetCodepoints(const std::string &text, int *count); - Get all codepoints in a string, codepoints count returned by parameters
    // int GetNextCodepoint(const std::string &text, int *bytesProcessed); - Returns next codepoint in a UTF8 encoded string; 0x3f('?') is returned on failure
    // const char *CodepointToUtf8(int codepoint, int *byteLength); - Encode codepoint into utf8 text (char array length returned as parameter)

};

#endif /* !RAYLIB_HPP_ */
