/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** PapaXmasTable
*/

#pragma once

#include "ITable.hpp"
#include "Object.hpp"

class PapaXmasTable : public virtual ITable
{
    public:
        PapaXmasTable();
        ~PapaXmasTable() = default;
        bool put(Object *obj) noexcept;
        Object *take(const int pos);
        std::string **look() const noexcept;

        // operator
        void operator =(Object& object) = delete;

    protected:
        Object **_objtable;
        int _nbToyOnTheTable;
        std::string _name[10];
};