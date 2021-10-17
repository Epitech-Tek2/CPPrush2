/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** ITable
*/

#include "PapaXmasTable.hpp"
#include "Toy.hpp"
#include <iostream>

PapaXmasTable::PapaXmasTable() : _nbToyOnTheTable(10) {}

bool PapaXmasTable::put(Object *obj) noexcept
{
    for (int i = 0; i < _nbToyOnTheTable; i++) {
        if (_objtable[i] == NULL) {
            _objtable[i] = obj;
            return true;
        }
    }
    std::cerr << "Table full" << std::endl;
    for (int i = 0 ; i != _nbToyOnTheTable; i++)
        delete _objtable[i];
    return false;
}

Object *PapaXmasTable::take(const int pos)
{
    Object *var_tmp = nullptr;
    int n = 0;

    if (_objtable[pos]) {
        var_tmp = _objtable[pos];
        _objtable[pos] = nullptr;
        for (int i = 0; i < _nbToyOnTheTable; i++)
            if (_objtable[i]) {
                _objtable[n] = _objtable[i];
                n++;
            }
        for (; n < _nbToyOnTheTable; n++) _objtable[n] = nullptr;
        _nbToyOnTheTable--;
        return (var_tmp);
    }
    std::cerr << "Object Invalid" << std::endl;
    return (nullptr);
}

std::string **PapaXmasTable::look() const noexcept
{
    std::string **content = new std::string *[_nbToyOnTheTable + 1];

    for (int i = 0; i < _nbToyOnTheTable; i++)
        *content[i] = _objtable[i]->getTitle();
    content[_nbToyOnTheTable] = nullptr;
    return (content);
}