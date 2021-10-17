/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Object
*/

#pragma once

#include <iostream>

#define cOut(message) std::cout << message << std::endl;

class Object {
    public:
        Object(const std::string title = "", const std::string type = "") noexcept;
        virtual ~Object() = default;

        // print
        virtual void cout(std::ostream& stream) const noexcept;

        // Getter
        std::string getType() const noexcept;
        std::string getTitle() const noexcept;

        // Operator
        void operator =(Object& object);

    protected:
        std::string _title;
        std::string _type;
};

/**
 * @brief Output stream
 */
std::ostream& operator<<(std::ostream& stream, Object& object) noexcept;