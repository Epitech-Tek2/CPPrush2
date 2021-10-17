/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** ITable
*/

#pragma once

#include "Object.hpp"

class ITable
{
    public:

        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Constructor
        /////
        ////////////////////////////////////////////////////////////////////////////////
        ITable() {};
        ~ITable() = default;


        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Methods
        /////
        ////////////////////////////////////////////////////////////////////////////////

        /**
         * @brief put an object on the table
         * @param obj object to put on the table
         * @return (std::string **)
         */
        virtual bool put(Object* obj) = 0;

        /**
         * @brief take an object from the table
         * @param pos position of the element
         * @return (Object *)
         */
        virtual Object *take(const int pos) = 0;

        /**
         * @brief look the table
         * @return (std::string *)
         */
        virtual std::string **look() const = 0;

        // operator
        void operator =(Object& object) = delete;
};