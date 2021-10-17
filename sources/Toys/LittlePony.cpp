/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** LittlePony
*/

#include "LittlePony.hpp"

LittlePony::LittlePony(std::string const& title) noexcept :
    Toy(title, std::string("LittlePony")) {}

void LittlePony::isTaken() noexcept
{
    if (!_isTaken) {
        cOut("yo man");
        _isTaken = true;
    }
}

void LittlePony::cout(std::ostream& stream) const noexcept
{
    Toy::cout(stream);
    stream << "------------LittlePony---------------" << std::endl;
    stream << "Toy type : " << getType() << std::endl;
    stream << "Toy title : " << getTitle() << std::endl;
    stream << "------------LittlePony---------------" << std::endl;
}