/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Toy
*/

#pragma once

#include <iostream>
#include <string>
#include "Object.hpp"

class Toy : public Object {
    public:
        Toy(std::string const& title, std::string const& type);
        virtual ~Toy() = default;

        void setTaken(bool isTaken) noexcept;
        /**
         * @brief Output toy is taken
         */
        virtual void isTaken();
        /**
         * @brief Output message
         * @param stream Output to print message
         */
        virtual void cout(std::ostream& stream) const noexcept;

        // Getter
        std::string getType() const noexcept;
        std::string getTitle() const noexcept;

        // Unit tests
        Object *MyUnitTests(Object **array) noexcept;

        // operator
        void operator =(Object& object) = delete;

    public:
        std::string _title;
        std::string _type;
        bool _isTaken;
};