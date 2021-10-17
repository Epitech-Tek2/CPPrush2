/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Wrap
*/

#pragma once

#include "Object.hpp"

class Wrap : public Object {
    public:
        Wrap(const std::string title, const std::string type) noexcept;
        virtual ~Wrap() = default;
        virtual void wrapMeThat(Object *object) = 0;
        virtual void openMe();
        virtual void closeMe();

        // operator
        void operator=(Wrap& wrap) = delete;

    protected:
        bool _open;
        Object *_objIn;
};