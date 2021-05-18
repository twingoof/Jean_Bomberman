/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez [WSL: Ubuntu-20.04]
** File description:
** RaylibShapes
*/

#ifndef RAYLIBSHAPES_HPP_
#define RAYLIBSHAPES_HPP_

#include "raylib.h"
#include <string>
#include <vector>

/**
 * @namespace Raylib
 */
namespace Raylib {

    extern "C" void setShapesTexture(Texture2D texture, Rectangle source);

    // Basic shapes drawing functions

    /**
     * @brief Draw a pixel on positions posX and posY.
     * @param posX X pixel's position
     * @param posY Y pixel's position
     * @param color Pixel's color
     */
    extern "C" void drawPixel(int posX, int posY, Color color);

    /**
     * @brief Draw a pixel (Vector version).
     * @param position Vector of float defining position x and y
     * @param color Pixel's color
     */
    extern "C" void drawPixelV(Vector2 position, Color color);

    /**
     * @brief Draw a line.
     * @param startPosX X position where the line should start
     * @param startPosY Y position where the line should start
     * @param endPosX X position where the line should end
     * @param endPosY Y position where the line should end
     * @param color Line's color
     */
    extern "C" void drawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color);

    /**
     * @brief Draw a line (Vector version).
     * @param startPos Vector of float position defining start of line (position X and Y)
     * @param endPos Vector of float position defining end of line (position X and Y)
     * @param color Line's color
     */
    extern "C" void drawLineV(Vector2 startPos, Vector2 endPos, Color color);

    /**
     * @brief Draw a line defining thickness.
     * @param startPos Vector of float position defining start of line (position X and Y)
     * @param endPos Vector of float position defining end of line (position X and Y)
     * @param thick Line's thickness
     * @param color Line's color
     */
    extern "C" void drawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color);

    /**
     * @brief Draw a line using cubic-bezier curves in-out.
     * @param startPos Vector of float position defining start of line (position X and Y)
     * @param endPos Vector of float position defining end of line (position X and Y)
     * @param thick Line's thickness
     * @param color Line's color
     */
    extern "C" void drawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color);

    /**
     * @brief Draw line using quadratic bezier curves with a control point.
     * @param startPos Vector of float position defining start of line (position X and Y)
     * @param endPos Vector of float position defining end of line (position X and Y)
     * @param controlPos Vector of float position defining control position of line (position X and Y)
     * @param thick Line's thickness
     * @param color Line's color
     */
    extern "C" void drawLineBezierQuad(Vector2 startPos, Vector2 endPos, Vector2 controlPos, float thick, Color color);

    /**
     * @brief Draw lines sequence.
     * @param points Vector of positions x and y of all points that should be draw
     * @param pointsCount Number of points to be drawn by line
     * @param color Line's color
     */
    extern "C" void drawLineStrip(std::vector<Vector2> points, int pointsCount, Color color);

    /**
     * @brief Draw a color-filled circle.
     * @param centerX X circle center's position
     * @param centerY Y circle center's position
     * @param radius Circle radius
     * @param color Color that will fill the circle
     */
    extern "C" void drawCircle(int centerX, int centerY, float radius, Color color);

    /**
     * @brief Draw a piece of a circle.
     * @param center Vector of position x and y of the center
     * @param radius Circle radius
     * @param startAngle Circle start angle to draw
     * @param endAngle Circle end angle to draw
     * @param segments Number of segments to draw
     * @param color Color that will fill the circle sector
     */
    extern "C" void drawCircleSector(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color);

    /**
     * @brief Draw circle sector outline.
     * @param center Vector of position x and y of the center
     * @param radius Circle radius
     * @param startAngle Circle start angle to draw
     * @param endAngle Circle end angle to draw
     * @param segments Number of segments to draw
     * @param color Color that will fill the circle sector
     */
    extern "C" void drawCircleSectorLines(Vector2 center, float radius, float startAngle, float endAngle, int segments, Color color);

    /**
     * @brief Draw a gradient-filled circle.
     * @param centerX X circle center's position
     * @param centerY Y circle center's position
     * @param radius Circle radius
     * @param color1 First gradient color to be drawn
     * @param color2 Second gradient color to be drawn
     */
    extern "C" void drawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2);

    /**
     * @brief Draw a color-filled circle (Vector version).
     * @param center Vector of the X and Y circle center position
     * @param radius Circle radius
     * @param color Color that will fill the circle
     */
    extern "C" void drawCircleV(Vector2 center, float radius, Color color);

    /**
     * @brief Draw circle outline.
     * @param centerX X circle center's position
     * @param centerY Y circle center's position
     * @param radius Circle radius
     * @param color Color that will fill the circle outlines
     */
    extern "C" void drawCircleLines(int centerX, int centerY, float radius, Color color);

    /**
     * @brief Draw ellipse.
     * @param centerX X ellipse center's position
     * @param centerY Y ellipse center's position
     * @param radiusH Height ellipse radius
     * @param radiusV Width ellipse radius
     * @param color Ellipse's color
     */
    extern "C" void drawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color);

    /**
     * @brief Draw ellipse outline.
     * @param centerX X ellipse center's position
     * @param centerY Y ellipse center's position
     * @param radiusH Height ellipse radius
     * @param radiusV Width ellipse radius
     * @param color Ellipse's color outlines
     */
    extern "C" void drawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color);

    /**
     * @brief Draw ring.
     * @param center Vector of X and Y position of the ring center
     * @param innerRadius Inner ring radius
     * @param outerRadius Outer ring radius
     * @param startAngle Start angle
     * @param endAngle End angle
     * @param segments Number of segment to draw
     * @param color Ring's color
     */
    extern "C" void drawRing(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color);

    /**
     * @brief Draw ring outline.
     * @param center Vector of X and Y position of the ring center
     * @param innerRadius Inner ring radius
     * @param outerRadius Outer ring radius
     * @param startAngle Start angle
     * @param endAngle End angle
     * @param segments Number of segment to draw
     * @param color Ring's color
     */
    extern "C" void drawRingLines(Vector2 center, float innerRadius, float outerRadius, float startAngle, float endAngle, int segments, Color color);

    /**
     * @brief Draw a color-filled rectangle.
     * @param posX X rectangle's left corner position
     * @param posY Y rectangle's left corner position
     * @param width Rectangle width
     * @param height Rectangle height
     * @param color Rectangle color
     */
    extern "C" void drawRectangle(int posX, int posY, int width, int height, Color color);

    /**
     * @brief Draw a color-filled rectangle (Vector version).
     * @param posistion Vector of float defining rectangle left corner position
     * @param size Vector of float defining rectangle's width and height
     * @param color Rectangle's color
     */
    extern "C" void drawRectangleV(Vector2 position, Vector2 size, Color color);

    /**
     * @brief Draw a color-filled rectangle.
     * @param rec Rectangle structure containing size and position
     * @param color Rectangle's color
     */
    extern "C" void drawRectangleRec(Rectangle rec, Color color);

    /**
     * @brief Draw a color-filled rectangle with pro parameters.
     * @param rec Rectangle structure containing size and position
     * @param origin Vector of float defining the left corner position of the origin
     * @param rotation Rotation vector of the drawn rectangle
     * @param color Rectangle's color
     */
    extern "C" void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color);

    /**
     * @brief Draw a vertical-gradient-filled rectangle.
     * @param rec Rectangle structure containing size and position
     * @param origin Vector of float defining the left corner position of the origin
     * @param rotation Rotation vector of the drawn rectangle
     * @param color1 First gradient color to be drawn
     * @param color2 Second gradient color to be drawn
     */
    extern "C" void drawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2);

    /**
     * @brief Draw a Draw a horizontal-gradient-filled rectangle.
     * @param rec Rectangle structure containing size and position
     * @param origin Vector of float defining the left corner position of the origin
     * @param rotation Rotation vector of the drawn rectangle
     * @param color1 First gradient color to be drawn
     * @param color2 Second gradient color to be drawn
     */
    extern "C" void drawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2);

    /**
     * @brief Draw a gradient-filled rectangle with custom vertex colors.
     * @param rec Rectangle structure containing size and position
     * @param col1 First gradient color to be drawn
     * @param col2 Second gradient color to be drawn
     * @param col3 Third gradient color to be drawn
     * @param col4 Fourth gradient color to be drawn
     */
    extern "C" void drawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4);

    /**
     * @brief Draw rectangle outline.
     * @param posX X rectangle's left corner position
     * @param posY Y rectangle's left corner position
     * @param width Rectangle width
     * @param height Rectangle height
     * @param color Rectangle lines color
     */
    extern "C" void drawRectangleLines(int posX, int posY, int width, int height, Color color);

    /**
     * @brief Draw rectangle outline with extended parameters.
     * @param rec Rectangle structure containing size and position
     * @param lineThick Rectangle lines thickness
     * @param color Rectangle lines color
     */
    extern "C" void drawRectangleLinesEx(Rectangle rec, int lineThick, Color color);

    /**
     * @brief Draw rectangle with rounded edges.
     * @param rec Rectangle structure containing size and position
     * @param roundness Rectangle lines roudness
     * @param segments Rectangle lines segments to draw
     * @param color Rectangle lines color
     */
    extern "C" void drawRectangleRounded(Rectangle rec, float roundness, int segments, Color color);

    /**
     * @brief Draw rectangle with rounded edges outline.
     * @param rec Rectangle structure containing size and position
     * @param roundness Rectangle lines roudness
     * @param segments Rectangle lines segments to draw
     * @param lineThick Rectangle lines thickness
     * @param color Rectangle lines color
     */
    extern "C" void drawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color);

    /**
     * @brief Draw a color-filled triangle (vertex in counter-clockwise order!).
     * @param v1 Position of the first point to draw
     * @param v2 Position of the second point to draw
     * @param v3 Position of the third point to draw
     * @param color Triangle color
     */
    extern "C" void drawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color);

    /**
     * @brief Draw triangle outline (vertex in counter-clockwise order!).
     * @param v1 Position of the first point to draw
     * @param v2 Position of the second point to draw
     * @param v3 Position of the third point to draw
     * @param color Triangle outlines color
     */
    extern "C" void drawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color);

    /**
     * @brief Draw a triangle fan defined by points (first vertex is the center).
     * @param points Vector of triangle points
     * @param pointsCount Number of points to draw
     * @param color Triangle color
     */
    extern "C" void drawTriangleFan(std::vector<Vector2> points, int pointsCount, Color color);

    /**
     * @brief Draw a triangle strip defined by points.
     * @param points Vector of triangle points
     * @param pointsCount Number of points to draw
     * @param color Triangle color
     */
    extern "C" void drawTriangleStrip(std::vector<Vector2> points, int pointsCount, Color color);

    /**
     * @brief Draw a regular polygon (Vector version).
     * @param center Vector of float defining center of the polygon
     * @param sides Number of sides
     * @param radius Polygon radius
     * @param rotation Polygon rotation degree
     * @param color Polygon color
     */
    extern "C" void drawPoly(Vector2 center, int sides, float radius, float rotation, Color color);

    /**
     * @brief Draw a polygon outline of n sides.
     * @param center Vector of float defining center of the polygon
     * @param sides Number of sides
     * @param radius Polygon radius
     * @param rotation Polygon rotation degree
     * @param color Polygon outlines color
     */
    extern "C" void drawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color);

    // Basic shapes collision detection functions

    /**
     * @brief Check collision between two rectangles.
     * @param rec1 First rectangle to check
     * @param rec2 Second rectangle to check
     * @return True if rec1 and rec2 are colliding, False otherwise
     */
    extern "C" bool checkCollisionRecs(Rectangle rec1, Rectangle rec2);

    /**
     * @brief Check collision between two circles
     * @param center1 Vector of float defining the center of the first circle
     * @param radius1 First circle radius
     * @param center2 Vector of float defining the center of the second circle
     * @param radius2 First circle radius
     * @return True if the first circle and the second are colliding, False otherwise
     */
    extern "C" bool checkCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2);

    /**
     * @brief Check collision between circle and rectangle.
     * @param center Vector of float defining the center of the circle to check
     * @param radius Circle radius
     * @param rec Rectangle to check collisions with
     * @return True if the circle and the rectangle are colliding, False otherwise
     */
    extern "C" bool checkCollisionCircleRec(Vector2 center, float radius, Rectangle rec);

    /**
     * @brief Check if point is inside rectangle.
     * @param point Vector of a point positions
     * @param rec Rectangle
     * @return True if the point is inside the rectangle, False otherwise
     */
    extern "C" bool checkCollisionPointRec(Vector2 point, Rectangle rec);

    /**
     * @brief Check if point is inside circle.
     * @param point Vector of a point positions
     * @param center Vector of circle center position
     * @param radius Circle radius
     * @return True if the point is inside the circle, False otherwise
     */
    extern "C" bool checkCollisionPointCircle(Vector2 point, Vector2 center, float radius);

    /**
     * @brief Check if point is inside a triangle.
     * @param point Vector of a point positions
     * @param p1 Vector of triangle first point positions
     * @param p2 Vector of triangle second point positions
     * @param p3 Vector of triangle third point positions
     * @return True if the point is inside the triangle, False otherwise
     */
    extern "C" bool checkCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3);

    /**
     * @brief Check the collision between two lines defined by two points each, returns collision point by reference.
     * @param startPos1 Vector of float position defining start of first line (position X and Y)
     * @param endPos1 Vector of float position defining end of first line (position X and Y)
     * @param startPos2 Vector of float position defining start of second line (position X and Y)
     * @param endPos2 Vector of float position defining end of second line (position X and Y)
     * @param collisionPoint Vector of collisionPoint
     * @return True if the two lines are colliding are colliding, False otherwise
     */
    extern "C" bool checkCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, std::vector<Vector2> collisionPoint);

    /**
     * @brief Get collision rectangle for two rectangles collision.
     * @param rec1 First rectangle to check collisions with
     * @param rec2 Second rectangle to check collisions with
     * @return Collision rectangle
     */
    extern "C" Rectangle getCollisionRec(Rectangle rec1, Rectangle rec2);

};

#endif /* !RAYLIBSHAPES_HPP_ */
