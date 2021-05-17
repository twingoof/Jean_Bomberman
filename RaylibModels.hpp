/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibModels
*/

#ifndef RAYLIBMODELS_HPP_
#define RAYLIBMODELS_HPP_

#include "raylib.h"

namespace Raylib {
//Basic geometric 3D shapes drawing functions
    /**
     * @brief Draw a line in 3D world space
     * 
     */
    extern "C" void drawLine3D(Vector3 startPos, Vector3 endPos, Color color);
    /**
     * @brief Draw a point in 3D space, actually a small line
     * 
     */
    extern "C" void drawPoint3D(Vector3 position, Color color);
    /**
     * @brief Draw a circle in 3D world space
     * 
     */
    extern "C" void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);
    /**
     * @brief Draw a color-filled triangle (vertex in counter-clockwise order!)
     * 
     */
    extern "C" void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color);
    /**
     * @brief Draw a triangle strip defined by points
     * 
     */
    extern "C" void drawTriangleStrip3D(Vector3 *points, int pointsCount, Color color);
    /**
     * @brief Draw cube
     * 
     */
    extern "C" void drawCube(Vector3 position, float width, float height, float length, Color color);
    /**
     * @brief Draw cube (Vector version)
     * 
     */
    extern "C" void drawCubeV(Vector3 position, Vector3 size, Color color);
    /**
     * @brief Draw cube wires
     * 
     */
    extern "C" void drawCubeWires(Vector3 position, float width, float height, float length, Color color);
    /**
     * @brief Draw cube wires (Vector version)
     * 
     */
    extern "C" void drawCubeWiresV(Vector3 position, Vector3 size, Color color);
    /**
     * @brief Draw cube textured
     * 
     */
    extern "C" void drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color);
    /**
     * @brief Draw sphere
     * 
     */
    extern "C" void drawSphere(Vector3 centerPos, float radius, Color color);
    /**
     * @brief Draw sphere with extended parameters
     * 
     */
    extern "C" void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);
    /**
     * @brief Draw sphere wires
     * 
     */
    extern "C" void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);
    /**
     * @brief Draw a cylinder/cone
     * 
     */
    extern "C" void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);
    /**
     * @brief Draw a cylinder/cone wires
     * 
     */
    extern "C" void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);
    /**
     * @brief Draw a plane XZ
     * 
     */
    extern "C" void drawPlane(Vector3 centerPos, Vector2 size, Color color);
    /**
     * @brief Draw a ray line
     * 
     */
    extern "C" void drawRay(Ray ray, Color color);
    /**
     * @brief Draw a grid (centered at (0, 0, 0))
     * 
     */
    extern "C" void drawGrid(int slices, float spacing);

// Model loading/unloading functions
    /**
     * @brief Load model from files (meshes and materials)
     * 
     */
    extern "C" Model LoadModel(const char *fileName);
    /**
     * @brief Load model from generated mesh (default material)
     * 
     */
    extern "C" Model loadModelFromMesh(Mesh mesh);
    /**
     * @brief Unload model (including meshes) from memory (RAM and/or VRAM)
     * 
     */
    extern "C" void unloadModel(Model model);
    /**
     * @brief Unload model (but not meshes) from memory (RAM and/or VRAM)
     * 
     */
    extern "C" void unloadModelKeepMeshes(Model model);

    // Mesh loading/unloading functions
    /**
     * @brief Upload vertex data into GPU and provided VAO/VBO ids
     * 
     */
    extern "C" void uploadMesh(Mesh *mesh, bool dynamic);
    /**
     * @brief Update mesh vertex data in GPU for a specific buffer index
     * 
     */
    extern "C" void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);
    /**
     * @brief Draw a 3d mesh with material and transform
     * 
     */
    extern "C" void drawMesh(Mesh mesh, Material material, Matrix transform);
    /**
     * @brief Draw multiple mesh instances with material and different transforms
     * 
     */
    extern "C" void drawMeshInstanced(Mesh mesh, Material material, Matrix *transforms, int instances);
    /**
     * @brief Unload mesh data from CPU and GPU
     * 
     */
    extern "C" void unloadMesh(Mesh mesh);
    /**
     * @brief Export mesh data to file, returns true on success
     * 
     */
    extern "C" bool exportMesh(Mesh mesh, const char *fileName);

// Material loading/unloading functions
    /**
     * @brief // Load materials from model file
     * 
     */
    extern "C" Material *loadMaterials(const char *fileName, int *materialCount);
    /**
     * @brief // Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
     * 
     */
    extern "C" Material loadMaterialDefault(void);
    /**
     * @brief // Unload material from GPU memory (VRAM)
     * 
     */
    extern "C" void unloadMaterial(Material material);
    /**
     * @brief // Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
     * 
     */
    extern "C" void setMaterialTexture(Material *material, int mapType, Texture2D texture);
    /**
     * @brief // Set material for a mesh
     * 
     */
    extern "C" void setModelMeshMaterial(Model *model, int meshId, int materialId);

// Model animations loading/unloading functions
    /**
     * @brief // Load model animations from file
     * 
     */
    extern "C" ModelAnimation *loadModelAnimations(const char *fileName, int *animsCount);
    /**
     * @brief // Update model animation pose
     * 
     */
    extern "C" void updateModelAnimation(Model model, ModelAnimation anim, int frame);
    /**
     * @brief // Unload animation data
     * 
     */
    extern "C" void unloadModelAnimation(ModelAnimation anim);
    /**
     * @brief // Unload animation array data
     * 
     */
    extern "C" void unloadModelAnimations(ModelAnimation* animations, unsigned int count);
    /**
     * @brief // Check model animation skeleton match
     * 
     */
    extern "C" bool isModelAnimationValid(Model model, ModelAnimation anim);

    // Mesh generation functions
    /**
     * @brief // Generate polygonal mesh
     * 
     */
    extern "C" Mesh genMeshPoly(int sides, float radius);
    /**
     * @brief // Generate plane mesh (with subdivisions)
     * 
     */
    extern "C" Mesh genMeshPlane(float width, float length, int resX, int resZ);
    /**
     * @brief // Generate cuboid mesh
     * 
     */
    extern "C" Mesh genMeshCube(float width, float height, float length);
    /**
     * @brief // Generate sphere mesh (standard sphere)
     * 
     */
    extern "C" Mesh genMeshSphere(float radius, int rings, int slices);
    /**
     * @brief // Generate half-sphere mesh (no bottom cap)
     * 
     */
    extern "C" Mesh genMeshHemiSphere(float radius, int rings, int slices);
    /**
     * @brief // Generate cylinder mesh
     * 
     */
    extern "C" Mesh genMeshCylinder(float radius, float height, int slices);
    /**
     * @brief // Generate torus mesh
     * 
     */
    extern "C" Mesh genMeshTorus(float radius, float size, int radSeg, int sides);
    /**
     * @brief // Generate trefoil knot mesh
     * 
     */
    extern "C" Mesh genMeshKnot(float radius, float size, int radSeg, int sides);
    /**
     * @brief // Generate heightmap mesh from image data
     * 
     */
    extern "C" Mesh genMeshHeightmap(Image heightmap, Vector3 size);
    /**
     * @brief // Generate cubes-based map mesh from image data
     * 
     */
    extern "C" Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);

    // Mesh manipulation functions
    /**
     * @brief // Compute mesh bounding box limits
     * 
     */
    extern "C" BoundingBox meshBoundingBox(Mesh mesh);
    /**
     * @brief // Compute mesh tangents
     * 
     */
    extern "C" void meshTangents(Mesh *mesh);
    /**
     * @brief // Compute mesh binormals
     * 
     */
    extern "C" void meshBinormals(Mesh *mesh);

    // Model drawing functions
    /**
     * @brief // Draw a model (with texture if set)
     * 
     */
    extern "C" void drawModel(Model model, Vector3 position, float scale, Color tint);
    /**
     * @brief // Draw a model with extended parameters
     * 
     */
    extern "C" void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);
    /**
     * @brief // Draw a model wires (with texture if set)
     * 
     */
    extern "C" void drawModelWires(Model model, Vector3 position, float scale, Color tint);
    /**
     * @brief // Draw a model wires (with texture if set) with extended parameters
     * 
     */
    extern "C" void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);
    /**
     * @brief // Draw bounding box (wires)
     * 
     */
    extern "C" void drawBoundingBox(BoundingBox box, Color color);
    /**
     * @brief // Draw a billboard texture
     * 
     */
    extern "C" void drawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint);
    /**
     * @brief // Draw a billboard texture defined by source
     * 
     */
    extern "C" void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, float size, Color tint);

    // Collision detection functions
    /**
     * @brief // Detect collision between two spheres
     * 
     */
    extern "C" bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2);
    /**
     * @brief // Detect collision between two bounding boxes
     * 
     */
    extern "C" bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);
    /**
     * @brief // Detect collision between box and sphere
     * 
     */
    extern "C" bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius);
    /**
     * @brief // Detect collision between ray and sphere
     * 
     */
    extern "C" bool checkCollisionRaySphere(Ray ray, Vector3 center, float radius);
    /**
     * @brief // Detect collision between ray and sphere, returns collision point
     * 
     */
    extern "C" bool checkCollisionRaySphereEx(Ray ray, Vector3 center, float radius, Vector3 *collisionPoint);
    /**
     * @brief // Detect collision between ray and box
     * 
     */
    extern "C" bool checkCollisionRayBox(Ray ray, BoundingBox box);
    /**
     * @brief // Get collision info between ray and mesh
     * 
     */
    extern "C" RayHitInfo getCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform);
    /**
     * @brief // Get collision info between ray and model
     * 
     */
    extern "C" RayHitInfo getCollisionRayModel(Ray ray, Model model);
    /**
     * @brief // Get collision info between ray and triangle
     * 
     */
    extern "C" RayHitInfo getCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3);
    /**
     * @brief // Get collision info between ray and ground plane (Y-normal plane)
     * 
     */
    extern "C" RayHitInfo getCollisionRayGround(Ray ray, float groundHeight);
}

#endif /* !RAYLIBMODELS_HPP_ */
