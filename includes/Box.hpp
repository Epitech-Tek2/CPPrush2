/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** Box
*/

#pragma once

#include "Wrap.hpp"

class Box : public virtual Wrap {
    public:
        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Constructor
        /////
        ////////////////////////////////////////////////////////////////////////////////

        Box();
        ~Box() = default;


        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Methods
        /////
        ////////////////////////////////////////////////////////////////////////////////

        /**
         * @brief wrap the object in the bow
         * @param object object to wrap
         * @return (void)
         */
        void wrapMeThat(Object *object) noexcept;

        /**
         * @brief outputs message
         * @param stream output to print the message
         * @return (void)
         */
        void cout(std::ostream& stream) const noexcept;

        // operator
        void operator =(Object& object) = delete;
    protected:
    private:
};