/*
** EPITECH PROJECT, 2021
** TableRand.hpp
** File description:
** TableRand.hpp
*/

#include "PapaXmasTable.hpp"
#include "Object.hpp"

#pragma once

class TableRand : public PapaXmasTable
{
    public:
        TableRand();
        ~TableRand();

        // operator
        void operator =(Object& object) = delete;

    private:
        void getRand(Object *object, int random) noexcept;
};
