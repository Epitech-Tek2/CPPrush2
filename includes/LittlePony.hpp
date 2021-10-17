/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** LittlePony
*/

#pragma once

#include <iostream>
#include <string>
#include "Toy.hpp"

class LittlePony : public virtual Toy {
    public:
        LittlePony(std::string const& title) noexcept;
        ~LittlePony() = default;

        /**
         * @brief outputs "yo man"
         * @return void
         */
        void isTaken() noexcept;
        void cout(std::ostream& stream) const noexcept;

        // operator
        void operator =(Object& object);

    private:
        bool _isTaken;
        std::string _title;
        std::string _type;
};