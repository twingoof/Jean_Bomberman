/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** RaylibShapes
*/

#include "RaylibShapes.hpp"

extern "C" void Raylib::drawPixel(int posX, int posY, Color color)
{
    DrawPixel(posX, posY, color);
}

extern "C" void Raylib::drawPixelV(Vector2 position, Color color)
{
    DrawPixelV(position, color);
}

extern "C" void Raylib::drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
{
    DrawLine(startPosX, startPosY, endPosX, endPosY, color);
}

extern "C" void Raylib::drawLineV(Vector2 startPos, Vector2 endPos, Color color)
{
    DrawLineV(startPos, endPos, color);
}

extern "C" void Raylib::drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineEx(startPos, endPos, thick, color);
}

extern "C" void Raylib::drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
{
    DrawLineBezier(startPos, endPos, thick, color);
}

extern "C" void Raylib::drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color)
{
    DrawLineBezierQuad(startPos, endPos, controlPos, thick, color);
}

extern "C" void Raylib::drawLineStrip(Vector2 *points, int pointsCount, Color color)
{
    ;
}

extern "C" void Raylib::drawCircle(int centerX, int centerY, float radius, Color color)
{
    DrawCircle(centerX, centerY, radius, color);
}

extern "C" void Raylib::drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSector(center, radius, startAngle, endAngle, segments, color);
}

extern "C" void Raylib::drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color)
{
    DrawCircleSectorLines(center, radius, startAngle, endAngle, segments, color);
}

extern "C" void Raylib::drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
{
    DrawCircleGradient(centerX, centerY, radius, color1, color2);
}

extern "C" void Raylib::drawCircleV(Vector2 center, float radius, Color color)
{
    DrawCircleV(center, radius, color);
}

extern "C" void Raylib::drawCircleLines(int centerX, int centerY, float radius, Color color)
{
    DrawCircleLines(centerX, centerY, radius, color);
}

extern "C" void Raylib::drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipse(centerX, centerY, radiusH, radiusV, color);
}

extern "C" void Raylib::drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
{
    DrawEllipseLines(centerX, centerY, radiusH, radiusV, color);
}

extern "C" void Raylib::drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRing(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

extern "C" void Raylib::drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color)
{
    DrawRingLines(center, innerRadius, outerRadius, startAngle, endAngle, segments, color);
}

extern "C" void Raylib::drawRectangle(int posX, int posY, int width, int height, Color color)
{
    DrawRectangle(posX, posY, width, height, color);
}

extern "C" void Raylib::drawRectangleV(Vector2 position, Vector2 size, Color color)
{
    DrawRectangleV(position, size, color);
}

extern "C" void Raylib::drawRectangleRec(Rectangle rec, Color color)
{
    DrawRectangleRec(rec, color);
}

extern "C" void Raylib::drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
{
    DrawRectanglePro(rec, origin, rotation, color);
}

extern "C" void Raylib::drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientV(posX, posY, width, height, color1, color2);
}

extern "C" void Raylib::drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
{
    DrawRectangleGradientH(posX, posY, width, height, color1, color2);
}

extern "C" void Raylib::drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
{
    DrawRectangleGradientEx(rec, col1, col2, col3, col4);
}

extern "C" void Raylib::drawRectangleLines(int posX, int posY, int width, int height, Color color)
{
    DrawRectangleLines(posX, posY, width, height, color);
}

extern "C" void Raylib::drawRectangleLinesEx(Rectangle rec, int lineThick, Color color)
{
    DrawRectangleLinesEx(rec, lineThick, color);
}

extern "C" void Raylib::drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
{
    DrawRectangleRounded(rec, roundness, segments, color);
}

extern "C" void Raylib::drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color)
{
    DrawRectangleRoundedLines(rec, roundness, segments, lineThick, color);
}

extern "C" void Raylib::drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangle(v1, v2, v3, color);
}

extern "C" void Raylib::drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
{
    DrawTriangleLines(v1, v2, v3, color);
}

extern "C" void Raylib::drawTriangleFan(Vector2 *points, int pointsCount, Color color)
{
    ;
}

extern "C" void Raylib::drawTriangleStrip(Vector2 *points, int pointsCount, Color color)
{
    ;
}

extern "C" void Raylib::drawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPoly(center, sides, radius, rotation, color);
}

extern "C" void Raylib::drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
{
    DrawPolyLines(center, sides, radius, rotation, color);
}

// Basic shapes collision detection functions

extern "C" bool Raylib::checkCollisionRecs(Rectangle rec1, Rectangle rec2)
{
    return (CheckCollisionRecs(rec1, rec2));
}

extern "C" bool Raylib::checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
{
    return (CheckCollisionCircles(center1, radius1, center2, radius2));
}

extern "C" bool Raylib::checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
{
    return (CheckCollisionCircleRec(center, radius, rec));
}

extern "C" bool Raylib::checkCollisionPointRec(Vector2 point, Rectangle rec)
{
    return (CheckCollisionPointRec(point, rec));
}

extern "C" bool Raylib::checkCollisionPointCircle(Vector2 point, Vector2 center, float radius)
{
    return (CheckCollisionPointCircle(point, center, radius));
}

extern "C" bool Raylib::checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
{
    return (CheckCollisionPointTriangle(point, p1, p2, p3));
}

extern "C" bool Raylib::checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
{
    ;
}

extern "C" Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2)
{
    return (GetCollisionRec(rec1, rec2));
}