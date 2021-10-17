/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** GiftPaper
*/

#pragma once

#include "Wrap.hpp"

class GiftPaper : public Wrap {
    public:

        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Constructor
        /////
        ////////////////////////////////////////////////////////////////////////////////

        GiftPaper(std::string const& title = "", std::string const& type = "") noexcept;
        ~GiftPaper() = default;


        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Method
        /////
        ////////////////////////////////////////////////////////////////////////////////

        /**
         * @brief wrap the object in the bow
         * @param object object to wrap
         * @return (void)
         */
        virtual void wrapMeThat(Object *object) noexcept;

        // operator
        void operator =(GiftPaper& object);

    private:
        bool _isOpen;
        Object *_objIn;
};