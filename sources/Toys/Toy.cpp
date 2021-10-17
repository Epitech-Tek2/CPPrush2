/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(std::string const& title, std::string const& type) :
    Object(title, type), _title(title), _type(type) {}

std::string Toy::getType() const noexcept
{
    return (_type);
}

std::string Toy::getTitle() const noexcept
{
    return (_title);
}

void Toy::isTaken()
{

}

void Toy::cout(std::ostream& stream) const noexcept
{
    Object::cout(stream);
    stream << "------------Toy---------------" << std::endl;
    stream << "Toy title : " << getTitle() << std::endl;
    stream << "Toy type : " << getType() << std::endl;
    stream << "------------Toy---------------" << std::endl;
}