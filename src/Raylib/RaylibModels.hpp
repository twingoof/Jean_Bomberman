/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibModels
*/

#ifndef RAYLIBMODELS_HPP_
#define RAYLIBMODELS_HPP_

#include "raylib.h"
#include <memory>
#include <string>
#include <vector>

/**
 * @namespace Raylib
 */
namespace Raylib {

    //Basic geometric 3D shapes drawing functions

    /**
     * @brief Draw a line in 3D world space
     * @param startPos Position X, Y and Z of the start point
     * @param endPos Position X, Y and Z of the end point
     * @param color 3D Lines color
     */
    extern "C" void drawLine3D(Vector3 startPos, Vector3 endPos, Color color);

    /**
     * @brief Draw a point in 3D space, actually a small line
     * @param position Position X, Y and Z of the point
     * @param color 3D point color
     */
    extern "C" void drawPoint3D(Vector3 position, Color color);

    /**
     * @brief Draw a circle in 3D world space
     * @param center Position X, Y and Z of the circle's center
     * @param radius Circle radius
     * @param rotationAxis Circle Rotation Axis
     * @param rotationAngle Circle Rotation Angle
     * @param color Filled color
     */
    extern "C" void drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color);

    /**
     * @brief Draw a color-filled triangle (vertex in counter-clockwise order!)
     * @param v1 Position X, Y and Z of the triangle first point
     * @param v2 Position X, Y and Z of the triangle second point
     * @param v3 Position X, Y and Z of the triangle third point
     * @param color Filled color
     */
    extern "C" void drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color);

    /**
     * @brief Draw a triangle strip defined by points
     * @param points Vector of points
     * @param pointsCount Number of points
     * @param color Filled color
     */
    extern "C" void drawTriangleStrip3D(std::vector<Vector3> points, int pointsCount, Color color);

    /**
     * @brief Draw cube
     * @param position Space X, Y and Z positions of the cube
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param color Filled color
     */
    extern "C" void drawCube(Vector3 position, float width, float height, float length, Color color);

    /**
     * @brief Draw cube (Vector version)
     * @param position Space X, Y and Z positions of the cube
     * @param size Cube dimensions in a Vector3
     * @param color Filled color
     */
    extern "C" void drawCubeV(Vector3 position, Vector3 size, Color color);

    /**
     * @brief Draw cube wires
     * @param position Space X, Y and Z positions of the cube
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param color Filled color
     */
    extern "C" void drawCubeWires(Vector3 position, float width, float height, float length, Color color);

    /**
     * @brief Draw cube wires (Vector version)
     * @param position Space X, Y and Z positions of the cube
     * @param size Cube dimensions in a Vector3
     * @param color Filled color
     */
    extern "C" void drawCubeWiresV(Vector3 position, Vector3 size, Color color);

    /**
     * @brief Draw cube textured
     * @param texture Texture to apply ot the cube
     * @param position Space X, Y and Z positions of the cube
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @param color Filled color
     */
    extern "C" void drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color);

    /**
     * @brief Draw sphere
     * @param centerPos Space X, Y and Z position of the sphere center
     * @param radius Sphere radius
     * @param color Filled color
     */
    extern "C" void drawSphere(Vector3 centerPos, float radius, Color color);

    /**
     * @brief Draw sphere with extended parameters
     * @param centerPos Space X, Y and Z position of the sphere center
     * @param radius Sphere radius
     * @param rings Number of rings
     * @param slices Number of slices
     * @param color Filled color
     */
    extern "C" void drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color);

    /**
     * @brief Draw sphere wires
     * @param centerPos Space X, Y and Z position of the sphere center
     * @param radius Sphere radius
     * @param rings Number of rings
     * @param slices Number of slices
     * @param color Filled color
     */
    extern "C" void drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color);

    /**
     * @brief Draw a cylinder/cone
     * @param position Space X, Y and Z position of the cylinder
     * @param radiusTop Radius of cylinder top face
     * @param radiusBottom Radius of cylinder botton face
     * @param height Cylinder height
     * @param slices Number of slices
     * @param color Filled color
     */
    extern "C" void drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);

    /**
     * @brief Draw a cylinder/cone wires
     * @param position Space X, Y and Z position of the cylinder
     * @param radiusTop Radius of cylinder top face
     * @param radiusBottom Radius of cylinder botton face
     * @param height Cylinder height
     * @param slices Number of slices
     * @param color Filled color
     */
    extern "C" void drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color);

    /**
     * @brief Draw a plane XZ
     * @param centerPos Space X, Y and Z position of the plane center
     * @param size Plane Width and Height defined into a Vector2
     * @param color Filled color
     */
    extern "C" void drawPlane(Vector3 centerPos, Vector2 size, Color color);

    /**
     * @brief Draw a ray line
     * @param ray Ray line to draw
     * @param color Filled color
     */
    extern "C" void drawRay(Ray ray, Color color);

    /**
     * @brief Draw a grid (centered at (0, 0, 0))
     * @param slices Number of slices
     * @param spacing Space length between to grid square
     */
    extern "C" void drawGrid(int slices, float spacing);


    // Model loading/unloading functions

    /**
     * @brief Load model from files (meshes and materials)
     * @param fileName Path to the Model
     * @return Created Model
     */
    extern "C" Model loadModel(const std::string &fileName);

    /**
     * @brief Load model from generated mesh (default material)
     * @param mesh Generated mesh (default material)
     * @return Created Models
     */
    extern "C" Model loadModelFromMesh(Mesh mesh);

    /**
     * @brief Unload model (including meshes) from memory (RAM and/or VRAM)
     * @param model Model to unload
     */
    extern "C" void unloadModel(Model model);

    /**
     * @brief Unload model (but not meshes) from memory (RAM and/or VRAM)
     * @param model Model's model to unload
     */
    extern "C" void unloadModelKeepMeshes(Model model);


    // Mesh loading/unloading functions

    /**
     * @brief Upload vertex data into GPU and provided VAO/VBO ids
     * @param mesh Mesh to upload
     * @param dynamic Says if the upload is dynamic or not
     */
    extern "C" void uploadMesh(std::unique_ptr<Mesh> mesh, bool dynamic);

    /**
     * @brief Update mesh vertex data in GPU for a specific buffer index
     * @param mesh Mesh to update
     * @param index Index of the mesh buffer to upload
     * @param data Buffer
     * @param dataSize Size of the buffer
     * @param offset
     */
    extern "C" void updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset);

    /**
     * @brief Draw a 3d mesh with material and transform
     * @param mesh Mesh to draw
     * @param material Material to applu to the Mesh
     * @param transform Matrix of transformation
     */
    extern "C" void drawMesh(Mesh mesh, Material material, Matrix transform);

    /**
     * @brief Draw multiple mesh instances with material and different transforms
     * @param mesh Mesh to draw
     * @param material Material to applu to the Mesh
     * @param transform Matrix vector of transformation
     * @param instances Number of instances
     */
    extern "C" void drawMeshInstanced(Mesh mesh, Material material, std::vector<Matrix> transforms, int instances);

    /**
     * @brief Unload mesh data from CPU and GPU
     * @param mesh Mesh to unload
     */
    extern "C" void unloadMesh(Mesh mesh);

    /**
     * @brief Export mesh data to file, returns true on success
     * @param mesh Mesh to export
     * @param fileName Filepath where the mesh must be exported
     * @return True if the export was succesfull, False otherwise
     */
    extern "C" bool exportMesh(Mesh mesh, const std::string &fileName);

    // Material loading/unloading functions

    /**
     * @brief Load materials from model file
     * @param fileName Filepath to Material file
     * @param materialCount Number of material to create
     * @return Pointer to a Material
     */
    extern "C" std::unique_ptr<Material> loadMaterials(const std::string &fileName, int materialCount);

    /**
     * @brief Load default material (Supports: DIFFUSE, SPECULAR, NORMAL maps)
     * @return Default Loaded Material
     */
    extern "C" Material loadMaterialDefault(void);

    /**
     * @brief Unload material from GPU memory (VRAM)
     * @param material Material to unload
     */
    extern "C" void unloadMaterial(Material material);

    /**
     * @brief Set texture for a material map type (MATERIAL_MAP_DIFFUSE, MATERIAL_MAP_SPECULAR...)
     * @param material Pointer to a material
     * @param mapType Mapping mode for texture seting
     * @param texture Texture to set to Material
     */
    extern "C" void setMaterialTexture(std::unique_ptr<Material> material, int mapType, Texture2D texture);

    /**
     * @brief Set material for a mesh
     * @param model Pointer to a model
     * @param meshId Mesh ID to set a model
     * @param materialId Material ID to set to meshId
     */
    extern "C" void setModelMeshMaterial(std::unique_ptr<Model> model, int meshId, int materialId);


    // Model animations loading/unloading functions

    /**
     * @brief Load model animations from file
     * @param fileName Filepath to model animation file
     * @param animsCount Number of animation
     * @return Pointer to a ModelAnimation
     */
    extern "C" std::unique_ptr<ModelAnimation> loadModelAnimations(const std::string &fileName, int animsCount);

    /**
     * @brief Update model animation pose
     * @param model Model to update
     * @param anim Animation to update
     * @param frame Number of frame to update
     */
    extern "C" void updateModelAnimation(Model model, ModelAnimation anim, int frame);

    /**
     * @brief Unload animation data
     * @param anim Animation to unload
     */
    extern "C" void unloadModelAnimation(ModelAnimation anim);

    /**
     * @brief Unload animation array data
     * @param animations Vector of ModelAnimation
     * @param count Number of animation to unload
     */
    extern "C" void unloadModelAnimations(std::vector<ModelAnimation> animations, unsigned int count);

    /**
     * @brief Check model animation skeleton match
     * @param model Model to check
     * @param anim Animation to check within the model
     * @return True if the modelAnimation is valid, False otherwise
     */
    extern "C" bool isModelAnimationValid(Model model, ModelAnimation anim);


    // Mesh generation functions

    /**
     * @brief Generate polygonal mesh
     * @param sides Number of sides
     * @param radius Radius value
     * @return Generated Polygonal Mesh
     */
    extern "C" Mesh genMeshPoly(int sides, float radius);

    /**
     * @brief Generate plane mesh (with subdivisions)
     * @param width Plane width
     * @param length Plane length
     * @param resX
     * @param resZ
     * @return Generated Plane Mesh
     */
    extern "C" Mesh genMeshPlane(float width, float length, int resX, int resZ);

    /**
     * @brief Generate cuboid mesh
     * @param width Cube width
     * @param height Cube height
     * @param length Cube length
     * @return Generated Cuboid Mesh
     */
    extern "C" Mesh genMeshCube(float width, float height, float length);

    /**
     * @brief Generate sphere mesh (standard sphere)
     * @param radius Sphere Mesh radius
     * @param rings Number of rings
     * @param slices Number of slices
     * @return Generated Sphere Mesh
     */
    extern "C" Mesh genMeshSphere(float radius, int rings, int slices);

    /**
     * @brief Generate half-sphere mesh (no bottom cap)
     * @param radius Hemisphere Mesh radius
     * @param rings Number of rings
     * @param slices Number of slices
     * @return Generated Sphere Mesh
     */
    extern "C" Mesh genMeshHemiSphere(float radius, int rings, int slices);

    /**
     * @brief Generate cylinder mesh
     * @param radius Cylinder top and bottom face radius
     * @param height Cylinder height
     * @param slices Number of slices
     * @return Generated Cylinder Mesh
     */
    extern "C" Mesh genMeshCylinder(float radius, float height, int slices);

    /**
     * @brief Generate torus mesh
     * @param radius Torus Mesh radius
     * @param size Torus Mesh size
     * @param radSeg
     * @param sides Number of sides
     * @return Generated Torus Mesh
     */
    extern "C" Mesh genMeshTorus(float radius, float size, int radSeg, int sides);

    /**
     * @brief Generate trefoil knot mesh
     * @param radius Torus Mesh radius
     * @param size Torus Mesh size
     * @param radSeg
     * @param sides Number of sides
     * @return Generated trefoil knot Mesh
     */
    extern "C" Mesh genMeshKnot(float radius, float size, int radSeg, int sides);

    /**
     * @brief Generate heightmap mesh from image data
     * @param heightmap
     * @param size Heightmap width, height and length defined by a Vector3
     * @return Generated Heightmap Mesh
     */
    extern "C" Mesh genMeshHeightmap(Image heightmap, Vector3 size);

    /**
     * @brief Generate cubes-based map mesh from image data
     * @param cubicMap Image of a cubic map
     * @param cubeSize Cube dimensions
     * @return Generated Cubicmap Mesh
     */
    extern "C" Mesh genMeshCubicmap(Image cubicmap, Vector3 cubeSize);

    // Mesh manipulation functions

    /**
     * @brief Compute mesh bounding box limits
     * @param mesh Mesh to build a Boundingbox
     * @return Generated BoudingBox Mesh
     */
    extern "C" BoundingBox meshBoundingBox(Mesh mesh);

    /**
     * @brief Compute mesh tangents
     * @param mesh Pointer to a mesh
     */
    extern "C" void meshTangents(std::unique_ptr<Mesh> mesh);

    /**
     * @brief Compute mesh binormals
     * @param mesh Pointer to a mesh
     */
    extern "C" void meshBinormals(std::unique_ptr<Mesh> mesh);


    // Model drawing functions
    /**
     * @brief Draw a model (with texture if set)
     * @param model Model to draw
     * @param position Space model's positions
     * @param scale Model's scale factor
     * @param tint Model tint
     */
    extern "C" void drawModel(Model model, Vector3 position, float scale, Color tint);

    /**
     * @brief Draw a model with extended parameters
     * @param model Model to draw
     * @param position Space model's positions
     * @param rotationAxis Rotation Axis
     * @param rotationAngle Rotation Angle degree
     * @param scale Scale factor
     * @param tint Model tint
     */
    extern "C" void drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);

    /**
     * @brief Draw a model wires (with texture if set)
     * @param model Model to draw
     * @param position Space model's positions
     * @param scale Scale factor
     * @param tint Model wire's color
     */
    extern "C" void drawModelWires(Model model, Vector3 position, float scale, Color tint);

    /**
     * @brief Draw a model wires (with texture if set) with extended parameters
     * @param model Model to draw
     * @param position Space model's positions
     * @param rotationAxis Rotation Axis
     * @param rotationAngle Rotation Angle degree
     * @param scale Space scale factor
     * @param tint Model tint
     */
    extern "C" void drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint);

    /**
     * @brief Draw bounding box (wires)
     * @param box
     * @param color BoundingBox color
     */
    extern "C" void drawBoundingBox(BoundingBox box, Color color);

    /**
     * @brief Draw a billboard texture
     * @param camera Billboard camera
     * @param texture Texture to set to billboard
     * @param center Space billboard positions
     * @param size Billboard size
     * @param tint Billboard tint
     */
    extern "C" void drawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint);

    /**
     * @brief Draw a billboard texture defined by source
     * @param camera Billboard camera
     * @param texture Texture to set to the billboard
     * @param source Rectangle that defines billboard texture
     * @param center Billboard center space positions
     * @param size Billboard size
     * @param tint Billboard rec tint
     */
    extern "C" void drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, Vector2 size, Color tint);

    // Collision detection functions

    /**
     * @brief Detect collision between two spheres
     * @param center1 First sphere center positions in space
     * @param radius1 First sphere radius
     * @param center2 Second sphere center positions in space
     * @param radius2 Second sphere radius
     * @return True if both sphere are colliding, False otherwise
     */
    extern "C" bool checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2);

    /**
     * @brief Detect collision between two bounding boxes
     * @param box1 First boudingbox
     * @param box2 Second boudingbox
     * @return True if both boudingbox are colliding, False otherwise
     */
    extern "C" bool checkCollisionBoxes(BoundingBox box1, BoundingBox box2);

    /**
     * @brief Detect collision between box and sphere
     * @param box BoudingBox to check collisions with
     * @param center Sphere center position in space
     * @param radius Sphere Radius
     * @return True if the boundingBox and the sphere are colliding, False otherwise
     */
    extern "C" bool checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius);

    /**
     * @brief Detect collision between ray and sphere
     * @param ray Ray to check collisions with
     * @param center Sphere center position in space
     * @param radius Sphere Radius
     * @return True if the ray and the sphere are colliding, False otherwise
     */
    extern "C" bool checkCollisionRaySphere(Ray ray, Vector3 center, float radius);

    /**
     * @brief Detect collision between ray and sphere, returns collision point
     * @param ray Ray to check collisions with
     * @param center Sphere center position in space
     * @param radius Sphere radius
     * @param collisionPoint Vector of collision points
     * @return True if ray and sphere are colliding, False otherwise
     */
    extern "C" bool checkCollisionRaySphereEx(Ray ray, Vector3 center, float radius, std::vector<Vector3> collisionPoint);

    /**
     * @brief Detect collision between ray and box
     * @param ray Ray to check collisions with
     * @param box BoudingBox to check collisions with
     * @return True if ray and box are colliding, False otherwise
     */
    extern "C" bool checkCollisionRayBox(Ray ray, BoundingBox box);

    /**
     * @brief Get collision info between ray and mesh
     * @param ray Ray to check collision with
     * @param mesh Mesh to check collision with
     * @param transform Matrix to transform Mesh
     * @return True if ray and mesh are colliding, False otherwise
     */
    extern "C" RayHitInfo getCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform);

    /**
     * @brief Get collision info between ray and model
     * @param ray Ray to check collision with
     * @param model Model to check collision with
     * @return True if ray and model are colliding, False otherwise
     */
    extern "C" RayHitInfo getCollisionRayModel(Ray ray, Model model);

    /**
     * @brief Get collision info between ray and triangle
     * @param ray Ray to check collision with
     * @param p1 First triangle point position in space
     * @param p2 Second triangle point position in space
     * @param p3 Third triangle point position in space
     * @return GTrue if ray and triangle are colliding, False otherwise
     */
    extern "C" RayHitInfo getCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3);

    /**
     * @brief Get collision info between ray and ground plane (Y-normal plane)
     * @param ray Ray to check collisions with
     * @param groundHeight Height between ground and ground plane
     * @return Generated Sphere Mesh
     */
    extern "C" RayHitInfo getCollisionRayGround(Ray ray, float groundHeight);

}

#endif /* !RAYLIBMODELS_HPP_ */
