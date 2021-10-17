/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Teddy
*/

#include "Teddy.hpp"

Teddy::Teddy(std::string const& title, std::string const& type) noexcept :
    Toy(title, type) {}

void Teddy::isTaken()
{
    if (!_isTaken) {
        cOut("gra hu");
        _isTaken = true;
    }
}

void Teddy::cout(std::ostream& stream) const noexcept
{
    Toy::cout(stream);
    stream << "------------Teddy---------------" << std::endl;
    stream << "Toy name : " << getTitle() << std::endl;
    stream << "Toy type : " << getType() << std::endl;
    stream << "------------Teddy---------------" << std::endl;
}

void Teddy::operator =(Teddy& object) noexcept
{
    _title = object._title;
    _type = object._type;
    _isTaken = object._isTaken;
}