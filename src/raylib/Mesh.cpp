/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Mesh
*/

#include "Mesh.hpp"

raylib::Mesh::Mesh(const ::Mesh &oldMesh)
{
    this->setMesh(oldMesh);
}

raylib::Mesh &raylib::Mesh::operator=(const ::Mesh &oldMesh)
{
    this->setMesh(oldMesh);
    return (*this);
}

raylib::Mesh::~Mesh()
{
    this->unload();
}

void raylib::Mesh::draw(const ::Material &meshMat, const ::Matrix &meshMatrix)
{
    ::DrawMesh(*this, meshMat, meshMatrix);
}

void raylib::Mesh::upload(bool isDynamic)
{
    ::UploadMesh(this, isDynamic);
}

void raylib::Mesh::unload()
{
    ::UnloadMesh(*this);
}

void raylib::Mesh::generatePlane(float width, float length, int resX, int resZ)
{
    this->setMesh(::GenMeshPlane(width, length, resX, resZ));
}

void raylib::Mesh::generateCube(float width, float height, float length)
{
    this->setMesh(::GenMeshCube(width, height, length));
}

void raylib::Mesh::generateSphere(float radius, int rings, int slices)
{
    this->setMesh(::GenMeshSphere(radius, rings, slices));
}

bool raylib::Mesh::exportMesh(const std::string &filePath)
{
    ::ExportMesh(*this, filePath.c_str());
}

void raylib::Mesh::setMesh(const ::Mesh &oldMesh)
{
    this->tangents = oldMesh.tangents;
    this->texcoords2 = oldMesh.texcoords2;
    this->texcoords = oldMesh.texcoords;
    this->triangleCount = oldMesh.triangleCount;
    this->vaoId = oldMesh.vaoId;
    this->vboId = oldMesh.vboId;
    this->vertexCount = oldMesh.vertexCount;
    this->vertices = oldMesh.vertices;
    this->animNormals = oldMesh.animNormals;
    this->animVertices = oldMesh.animVertices;
    this->boneIds = oldMesh.boneIds;
    this->boneWeights = oldMesh.boneWeights;
    this->indices = oldMesh.indices;
    this->colors = oldMesh.colors;
    this->normals = oldMesh.normals;
}
