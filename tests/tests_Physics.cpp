/*
** EPITECH PROJECT, 2021
** Visual Studio Live Share (Workspace)
** File description:
** tests_Physics
*/

#include "OSRedirector.hpp"
#include "ECSVector3.hpp"
#include "Physics.hpp"

Test(Physics_constructor, normal_usage)
{
    ECSVector3 size(1, 2, 3);
    ECSVector3 position(1, 2, 3);
    Physics physics(size, position);
}