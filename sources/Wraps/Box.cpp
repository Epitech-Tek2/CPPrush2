/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Box
*/

#include "Wrap.hpp"
#include "Box.hpp"

Box::Box() : Wrap("manger bébé", "Box") {}

void Box::cout(std::ostream& stream) const noexcept
{
    Object::cout(stream);
    stream << "------------Toy---------------" << std::endl;
    stream << "Toy name : " << "???" << std::endl;
    stream << "Toy type : " << "???" << std::endl;
    stream << "------------Toy---------------" << std::endl;
}

void Box::wrapMeThat(Object *object) noexcept
{
    if (!_objIn) _objIn = object;
}