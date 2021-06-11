/*
** EPITECH PROJECT, 2021
** B-YEP-400-NAN-4-1-indiestudio-gildas.gonzalez
** File description:
** Physics
*/

#include "Physics.hpp"

raylib::Physics::Physics(const std::string &name)
    : _name(name)
{}

raylib::Physics::Physics(const raylib::Physics &rHand)
{
    this->_name = rHand._name;
    this->setPhysicBody(rHand);
}

raylib::Physics &raylib::Physics::operator=(const raylib::Physics &rHand)
{
    this->_name = rHand._name;
    this->setPhysicBody(rHand);
    return (*this);
}

raylib::Physics::~Physics()
{
    this->destroyPhysicBody();
}

void raylib::Physics::createPhysicBodyCircle(::Vector2 position, float radius, float density)
{
    this->setPhysicBody(*(::CreatePhysicsBodyCircle(position, radius, density)));
}

void raylib::Physics::createPhysicBodyRect(::Vector2 position, float width, float height, float density)
{
    this->setPhysicBody(*(::CreatePhysicsBodyRectangle(position, width, height, density)));
}

void raylib::Physics::createPhysicBodyPolygon(::Vector2 position, float radius, int sides, float density)
{
    this->setPhysicBody(*(::CreatePhysicsBodyPolygon(position, radius, sides, density)));
}

void raylib::Physics::addForce(::Vector2 force)
{
    this->force = force;
}

void raylib::Physics::addTorque(float amount)
{
    this->torque = amount;
}

void raylib::Physics::shatter(::Vector2 pos, float force)
{
    ::PhysicsShatter(this, pos, force);
}

const std::string &raylib::Physics::getName(void) const
{
    return (_name);
}

void raylib::Physics::disableDynamicPhysic(void)
{
    this->enabled = false;
}

void raylib::Physics::enableDynamicPhysic(void)
{
    this->enabled = true;
}

void raylib::Physics::destroyPhysicBody(void)
{
    ::DestroyPhysicsBody(this);
}

void raylib::Physics::setPhysicBody(const ::PhysicsBodyData physicData)
{
    this->angularVelocity = physicData.angularVelocity;
    this->id = physicData.id;
    this->enabled = physicData.enabled;
    this->position = physicData.position;
    this->velocity = physicData.velocity;
    this->force = physicData.force;
    this->torque = physicData.torque;
    this->orient = physicData.orient;
    this->freezeOrient = physicData.angularVelocity;
    this->inertia = physicData.inertia;
    this->inverseInertia = physicData.inverseInertia;
    this->mass = physicData.mass;
    this->inverseMass = physicData.inverseMass;
    this->staticFriction = physicData.staticFriction;
    this->dynamicFriction = physicData.dynamicFriction;
    this->restitution = physicData.restitution;
    this->useGravity = physicData.useGravity;
    this->isGrounded = physicData.isGrounded;
    this->shape = physicData.shape;
}
