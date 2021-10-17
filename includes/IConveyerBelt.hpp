/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** IConveyerBelt
*/

#pragma once

class IConveyerBelt {
    public:
        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Constructor
        /////
        ////////////////////////////////////////////////////////////////////////////////
        IConveyerBelt();
        ~IConveyerBelt() = default;

        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Methods
        /////
        ////////////////////////////////////////////////////////////////////////////////

        /**
         * @brief Puts an object on the conveyer
         * @param obj object to put
         * @return (bool)
         */
        virtual bool put(Object* obj) = 0;

        /**
         * @brief Takes an object from the conveyer
         * @return (Object *)
         */
        virtual Object *take() = 0;

        // operator
        void operator =(Object& object) = delete;

    protected:
    private:
};