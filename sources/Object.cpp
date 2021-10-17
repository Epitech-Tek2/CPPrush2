/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Object
*/

#include "../includes/Object.hpp"

Object::Object(const std::string title, const std::string type) noexcept :
    _title(title), _type(type) {}

std::ostream& operator<<(std::ostream& stream, Object& object) noexcept
{
    object.cout(stream);
    return (stream);
}

std::string Object::getType() const noexcept
{
    return (_type);
}

std::string Object::getTitle() const noexcept
{
    return (_title);
}

// Object *MyUnitTests(Object **objects)
// {
//     Teddy *teddy = reinterpret_cast<Teddy*>(objects[0]);
//     Box *box = reinterpret_cast<Box*>(objects[1]);
//     GiftPaper *paper = reinterpret_cast<GiftPaper*>(objects[2]);

//     return (paper->wrapMeThat(box->wrapMeThat(teddy)));
// }

void Object::cout(std::ostream& stream) const noexcept
{
    stream << "------------Teddy---------------" << std::endl;
    stream << "Toy title : " << getTitle() << std::endl;
    stream << "Toy type : " << getType() << std::endl;
    stream << "------------Teddy---------------" << std::endl;
}

void Object::operator=(Object& object)
{
    _title = object._title;
}