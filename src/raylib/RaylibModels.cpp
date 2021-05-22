/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** RaylibModels
*/

#include "RaylibModels.hpp"

extern "C" void Raylib::drawLine3D(Vector3 startPos, Vector3 endPos, Color color)
{
    DrawLine3D(startPos, endPos, color);
}

extern "C" void Raylib::drawPoint3D(Vector3 position, Color color)
{
    DrawPoint3D(position, color);
}

extern "C" void Raylib::drawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
{
    DrawCircle3D(center, radius, rotationAxis, rotationAngle, color);
}

extern "C" void Raylib::drawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
{
    DrawTriangle3D(v1, v2, v3, color);
}

extern "C" void Raylib::drawTriangleStrip3D(std::vector<Vector3> points, int pointsCount, Color color)
{
    DrawTriangleStrip3D(points.data(), pointsCount, color);
}

extern "C" void Raylib::drawCube(Vector3 position, float width, float height, float length, Color color)
{
    DrawCube(position, width, height, length, color);
}

extern "C" void Raylib::drawCubeV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeV(position, size, color);
}

extern "C" void Raylib::drawCubeWires(Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeWires(position, width, height, length, color);
}

extern "C" void Raylib::drawCubeWiresV(Vector3 position, Vector3 size, Color color)
{
    DrawCubeWiresV(position, size, color);
}

extern "C" void Raylib::drawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color)
{
    DrawCubeTexture(texture, position, width, height, length, color);
}

extern "C" void Raylib::drawSphere(Vector3 centerPos, float radius, Color color)
{
    DrawSphere(centerPos, radius, color);
}

extern "C" void Raylib::drawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereEx(centerPos, radius, rings, slices, color);
}

extern "C" void Raylib::drawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
{
    DrawSphereWires(centerPos, radius, rings, slices, color);
}

extern "C" void Raylib::drawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinder(position, radiusTop, radiusBottom, height, slices, color);
}

extern "C" void Raylib::drawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
{
    DrawCylinderWires(position, radiusTop, radiusBottom, height, slices, color);
}

extern "C" void Raylib::drawPlane(Vector3 centerPos, Vector2 size, Color color)
{
    DrawPlane(centerPos, size, color);
}

extern "C" void Raylib::drawRay(Ray ray, Color color)
{
    DrawRay(ray, color);
}

extern "C" void Raylib::drawGrid(int slices, float spacing)
{
    DrawGrid(slices, spacing);
}

extern "C" Model Raylib::loadModel(const std::string &fileName)
{
    LoadModel(fileName.c_str());
}

extern "C" Model Raylib::loadModelFromMesh(Mesh mesh)
{
    return (LoadModelFromMesh(mesh));
}

extern "C" void Raylib::unloadModel(Model model)
{
    UnloadModel(model);
}

extern "C" void Raylib::unloadModelKeepMeshes(Model model)
{
    UnloadModelKeepMeshes(model);
}

extern "C" void Raylib::uploadMesh(std::unique_ptr<Mesh> mesh, bool dynamic)
{
    UploadMesh(mesh.get(), dynamic);
}

extern "C" void Raylib::updateMeshBuffer(Mesh mesh, int index, void *data, int dataSize, int offset)
{
    UpdateMeshBuffer(mesh, index, data, dataSize, offset);
}

extern "C" void Raylib::drawMesh(Mesh mesh, Material material, Matrix transform)
{
    DrawMesh(mesh, material, transform);
}

extern "C" void Raylib::drawMeshInstanced(Mesh mesh, Material material, std::vector<Matrix> transforms, int instances)
{
    DrawMeshInstanced(mesh, material, transforms.data(), instances);
}

extern "C" void Raylib::unloadMesh(Mesh mesh)
{
    UnloadMesh(mesh);
}

extern "C" bool Raylib::exportMesh(Mesh mesh, const std::string &fileName)
{
    return (ExportMesh(mesh, fileName.c_str()));
}

extern "C" std::unique_ptr<Material> loadMaterials(const std::string &fileName, int materialCount)
{
    return (std::make_unique<Material>(LoadMaterials(fileName.c_str(), &materialCount)));
}

extern "C" Material Raylib::loadMaterialDefault(void)
{
    return (LoadMaterialDefault());
}

extern "C" void Raylib::unloadMaterial(Material material)
{
    UnloadMaterial(material);
}

extern "C" void Raylib::setMaterialTexture(std::unique_ptr<Material> material, int mapType, Texture2D texture)
{
    SetMaterialTexture(material.get(), mapType, texture);
}

extern "C" void Raylib::setModelMeshMaterial(std::vector<Model> model, int meshId, int materialId)
{
    SetModelMeshMaterial(model.data(), meshId, materialId);
}

extern "C" std::unique_ptr<ModelAnimation> Raylib::loadModelAnimations(const std::string &fileName, int animsCount)
{
    return (std::make_unique<ModelAnimation> LoadModelAnimations(fileName.c_str(), &animsCount));
}

extern "C" void Raylib::updateModelAnimation(Model model, ModelAnimation anim, int frame)
{
    UpdateModelAnimation(model, anim, frame);
}

extern "C" void Raylib::unloadModelAnimation(ModelAnimation anim)
{
    UnloadModelAnimation(anim);
}

extern "C" void Raylib::unloadModelAnimations(std::vector<ModelAnimation> animations, unsigned int count)
{
    UnloadModelAnimations(animations.data(), count);
}

extern "C" bool Raylib::isModelAnimationValid(Model model, ModelAnimation anim)
{
    return (IsModelAnimationValid(model, anim));
}

extern "C" Mesh Raylib::genMeshPoly(int sides, float radius)
{
    return (GenMeshPoly(sides, radius));
}

extern "C" Mesh Raylib::genMeshPlane(float width, float length, int resX, int resZ)
{
    return (GenMeshPlane(width, length, resX, resZ));
}

extern "C" Mesh Raylib::genMeshCube(float width, float height, float length)
{
    return (GenMeshCube(width, height, length));
}

extern "C" Mesh Raylib::genMeshSphere(float radius, int rings, int slices)
{
    return (GenMeshSphere(radius, rings, slices));
}

extern "C" Mesh Raylib::genMeshHemiSphere(float radius, int rings, int slices)
{
    return (GenMeshHemiSphere(radius, rings, slices));
}

extern "C" Mesh Raylib::genMeshCylinder(float radius, float height, int slices)
{
    return (GenMeshCylinder(radius, height, slices));
}

extern "C" Mesh Raylib::genMeshTorus(float radius, float size, int radSeg, int sides)
{
    return (GenMeshTorus(radius, size, radSeg, sides));
}

extern "C" Mesh Raylib::genMeshKnot(float radius, float size, int radSeg, int sides)
{
    return (GenMeshKnot(radius, size, radSeg, sides));
}

extern "C" Mesh Raylib::genMeshHeightmap(Image heightmap, Vector3 size)
{
    return (GenMeshHeightmap(heightmap, size));
}

extern "C" Mesh Raylib::genMeshCubicmap(Image cubicmap, Vector3 cubeSize)
{
    return (GenMeshCubicmap(cubicmap, cubeSize));
}

extern "C" BoundingBox meshBoundingBox(Mesh mesh)
{
    return (MeshBoundingBox(mesh));
}

extern "C" void Raylib::meshTangents(std::unique_ptr<Mesh> mesh)
{
    MeshTangents(mesh.get());
}

extern "C" void Raylib::meshBinormals(std::unique_ptr<Mesh> mesh)
{
    MeshBinormals(mesh.get());
}

extern "C" void Raylib::drawModel(Model model, Vector3 position, float scale, Color tint)
{
    DrawModel(model, position, scale, tint);
}

extern "C" void Raylib::drawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

extern "C" void Raylib::drawModelWires(Model model, Vector3 position, float scale, Color tint)
{
    DrawModelWires(model, position, scale, tint);
}

extern "C" void Raylib::drawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
{
    DrawModelWiresEx(model, position, rotationAxis, rotationAngle, scale, tint);
}

extern "C" void Raylib::drawBoundingBox(BoundingBox box, Color color)
{
    DrawBoundingBox(box, color);
}

extern "C" void Raylib::drawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint)
{
    DrawBillboard(camera, texture, center, size, tint);
}

extern "C" void Raylib::drawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, Vector2 size, Color tint)
{
    DrawBillboardRec(camera, texture, source, center, size, tint);
}

extern "C" bool Raylib::checkCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
{
    return (CheckCollisionSpheres(center1, radius1, center2, radius2));
}

extern "C" bool Raylib::checkCollisionBoxes(BoundingBox box1, BoundingBox box2)
{
    return (CheckCollisionBoxes(box1, box2));
}

extern "C" bool Raylib::checkCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
{
    return (CheckCollisionBoxSphere(box, center, radius));
}

extern "C" bool Raylib::checkCollisionRaySphere(Ray ray, Vector3 center, float radius)
{
    return (CheckCollisionRaySphere(ray, center, radius));
}

extern "C" bool Raylib::checkCollisionRaySphereEx(Ray ray, Vector3 center, float radius, std::vector<Vector3> collisionPoint)
{
    return (CheckCollisionRaySphereEx(ray, center, radius, collisionPoint.data()));
}

extern "C" bool Raylib::checkCollisionRayBox(Ray ray, BoundingBox box)
{
    return (CheckCollisionRayBox(ray, box));
}

extern "C" RayHitInfo getCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform)
{
    return (GetCollisionRayMesh(ray, mesh, transform));
}

extern "C" RayHitInfo getCollisionRayModel(Ray ray, Model model)
{
    return (GetCollisionRayModel(ray, model));
}

extern "C" RayHitInfo getCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
{
    return (GetCollisionRayTriangle(ray, p1, p2, p3));
}

extern "C" RayHitInfo getCollisionRayGround(Ray ray, float groundHeight)
{
    return (GetCollisionRayGround(ray, groundHeight));
}