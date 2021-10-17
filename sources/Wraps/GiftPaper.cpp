/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** GiftPaper
*/

#include "GiftPaper.hpp"
#include "Wrap.hpp"

GiftPaper::GiftPaper(std::string const& title, std::string const& type) noexcept :
    Wrap(title, type) {}

void GiftPaper::operator=(GiftPaper& object)
{
    _title = object._title;
    _type = object._type;
    _open = object._open;
    _objIn = object._objIn;
}

void GiftPaper::wrapMeThat(Object *object) noexcept
{
    if (!_objIn) _objIn = object;
}
