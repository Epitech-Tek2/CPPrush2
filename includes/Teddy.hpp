/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Teddy
*/

#pragma once

#include <iostream>
#include <string>
#include "Toy.hpp"

class Teddy : public virtual Toy {
    public:
        Teddy(std::string const& title, std::string const& type = "Teddy") noexcept;
        ~Teddy() = default;

        /**
         * @brief Output toy is taken
         */
        void isTaken();
        void cout(std::ostream& stream) const noexcept;

        // operator
        void operator =(Teddy& object) noexcept;

    protected:
        std::string _type;
};