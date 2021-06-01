/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** RaylibText
*/

#include "RaylibText.hpp"

// Font loading/unloading functions

extern "C" Font Raylib::getFontDefault(void)
{
    return (GetFontDefault());
}

extern "C" Font Raylib::loadFont(const std::string &filename)
{
    return (LoadFont(filename.c_str()));
}

extern "C" Font Raylib::loadFontEx(const std::string &fileName, int fontSize, std::vector<int> fontChars, int charsCount)
{
    return (LoadFontEx(fileName.c_str(), fontSize, fontChars.data(), charsCount));
}

extern "C" Font Raylib::loadFontFromImage(Image image, Color key, int firstChar)
{
    return (LoadFontFromImage(image, key, firstChar));
}

extern "C" Font Raylib::loadFontFromMemory(const std::string &fileType, const std::string &fileData, int dataSize, int fontSize, std::vector<int> fontChars, int charsCount)
{
    unsigned char trap[fileData.size()];

    std::copy(fileData.begin(), fileData.end(), trap);
    trap[fileData.length()] = 0;
    return (LoadFontFromMemory(fileType.c_str(), trap, dataSize, fontSize, fontChars.data(), charsCount));
}

extern "C" void Raylib::unloadFont(Font font)
{
    UnloadFont(font);
}

extern "C" void Raylib::drawFPS(int posX, int posY)
{
    DrawFPS(posX, posY);
}

extern "C" void Raylib::drawText(const std::string &text, int posX, int posY, int fontSize, Color color)
{
    DrawText(text.c_str(), posX, posY, fontSize, color);
}

extern "C" void Raylib::drawTextEx(Font font, const std::string &text, Vector2 position, float fontSize, float spacing, Color tint)
{
    DrawTextEx(font, text.c_str(), position, fontSize, spacing, tint);
}

extern "C" void Raylib::drawTextRec(Font font, const std::string &text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint)
{
    DrawTextRec(font, text.c_str(), rec, fontSize, spacing, wordWrap, tint);
}

extern "C" void Raylib::drawTextRecEx(Font font, const std::string &text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint,
                        int selectStart, int selectLength, Color selectTint, Color selectBackTint)
{
    DrawTextRecEx(font, text.c_str(), rec, fontSize, spacing, wordWrap, tint, selectStart, selectLength, selectTint, selectBackTint);
}

extern "C" void Raylib::drawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
{
    DrawTextCodepoint(font, codepoint, position, fontSize, tint);
}

// Text misc. functions

extern "C" int Raylib::measureText(const std::string &text, int fontSize)
{
    return (MeasureText(text.c_str(), fontSize));
}

extern "C" Vector2 measureTextEx(Font font, const std::string &text, float fontSize, float spacing)
{
    return (MeasureTextEx(font, text.c_str(), fontSize, spacing));
}

extern "C" int Raylib::getGlyphIndex(Font font, int codepoint)
{
    return (GetGlyphIndex(font, codepoint));
}

// Text strings management functions (no utf8 strings, only byte chars)
// NOTE: Some strings allocate memory internally for returned strings, just be careful!

extern "C" int Raylib::textCopy(std::string &dst, const std::string &src)
{
    return (TextCopy((char *)dst.c_str(), src.c_str()));
}

extern "C" bool Raylib::textIsEqual(const std::string &text1, const std::string &text2)
{
    return (TextIsEqual(text1.c_str(), text2.c_str()));
}

extern "C" unsigned int Raylib::textLength(const std::string &text)
{
    return (TextLength(text.c_str()));
}

extern "C" const std::string &Raylib::textFormat(const std::string &text, ...)
{
    return ("TextFormat(text.c_str())");
}

extern "C" const std::string &Raylib::textSubtext(const std::string &text, int position, int length)
{
    return (TextSubtext(text.c_str(), position, length));
}

extern "C" std::string Raylib::textReplace(std::string &text, const std::string &replace, const std::string &by)
{
    return (TextReplace((char *)text.c_str(), replace.c_str(), by.c_str()));
}

extern "C" std::string Raylib::textInsert(const std::string &text, const std::string &insert, int position)
{
    return (TextInsert(text.c_str(), insert.c_str(), position));
}

extern "C" const std::string &Raylib::textJoin(std::vector<std::string> textList, int count, const std::string &delimiter)
{
    return ("TextJoin(textList, count, delimiter.c_str())");
}

extern "C" const std::vector<std::string>Raylib::textSplit(const std::string &text, char delimiter, std::vector<int> count)
{
    std::vector<std::string> newSplited;
    const char **splited = TextSplit(text.c_str(), delimiter, count.data());

    for (int i = 0; splited[i] != nullptr; i++)
        newSplited.push_back(splited[i]);
    return (newSplited);
}

extern "C" void Raylib::textAppend(std::string &text, const std::string &append, std::vector<int> position)
{
    TextAppend((char *)text.c_str(), append.c_str(), position.data());
}

extern "C" int Raylib::textFindIndex(const std::string &text, const std::string &find)
{
    return (TextFindIndex(text.c_str(), find.c_str()));
}

extern "C" const std::string &Raylib::textToUpper(const std::string &text)
{
    return (TextToUpper(text.c_str()));
}

extern "C" const std::string &Raylib::textToLower(const std::string &text)
{
    return (TextToLower(text.c_str()));
}

extern "C" const std::string &Raylib::textToPascal(const std::string &text)
{
    return (TextToPascal(text.c_str()));
}

extern "C" int Raylib::textToInteger(const std::string &text)
{
    return (TextToInteger(text.c_str()));
}

// UTF8 text strings management functions

extern "C" int Raylib::getCodepointsCount(const std::string &text)
{
    return (GetCodepointsCount(text.c_str()));
}