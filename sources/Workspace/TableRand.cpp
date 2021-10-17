/*
** EPITECH PROJECT, 2021
** TableRand.cpp
** File description:
** TableRand.cpp
*/

#include <cstdlib>
#include <stdlib.h>
#include "Teddy.hpp"
#include "LittlePony.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"
#include "TableRand.hpp"

TableRand::TableRand() : PapaXmasTable()
{
    Object *object = nullptr;
    int rand = 0;

    getRand(object, rand);
}

void TableRand::getRand(Object *object, int random) noexcept
{
    static int i = 0;

    if (i < 9) return;
    random = rand() % 4;
    object = (0 == i) ? new GiftPaper() :
    (1 == i) ? new Box() :
    (2 == i) ? new Teddy("Ted le ted") :
    (3 == i) ? new LittlePony("blablabla") : object;
    _objtable[i] = object;

    return (getRand(object, random));
}

TableRand::~TableRand()
{
    for (int i = 0; i < _nbToyOnTheTable; ++i) {
        if (_objtable[i])
            delete _objtable;
    }
}