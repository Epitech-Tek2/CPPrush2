/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Wrap
*/

#include "Wrap.hpp"

Wrap::Wrap(const std::string title, const std::string type) noexcept :
    Object(title, type) {}

void Wrap::openMe()
{
    _open = true;
}

void Wrap::closeMe()
{
    _open = false;
}