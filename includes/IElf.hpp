/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** IElf
*/

#pragma once

#include "Toy.hpp"
#include "Object.hpp"
#include "GiftPaper.hpp"
#include "Wrap.hpp"
#include "Box.hpp"
#include "ITable.hpp"
#include "IConveyerBelt.hpp"

class IElf
{
    public:
        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Constructor
        /////
        ////////////////////////////////////////////////////////////////////////////////
        IElf(IConveyerBelt *conveyer, ITable *table) noexcept;
        ~IElf() = default;


        void sendGift() noexcept;

    protected:
        ITable *_table;
        IConveyerBelt *_iConveyerBelt;


        ////////////////////////////////////////////////////////////////////////////////
        /////
        /////   Methods
        /////
        ////////////////////////////////////////////////////////////////////////////////


        /**
         * @brief get a toy
         * @param noexcept
         * @return (Object *)
         */
        Object *getToy() const noexcept;

        /**
         * @brief get a gift paper
         * @param type
         * @return (Wrap *)
         */
        Object *getGiftPaper(const std::string type) noexcept;
        Wrap *getWrap() const noexcept;

        /**
         * @brief get a box wrapper
         * @return (Box *)
         */
        Box *getBox() noexcept;

        // operator
        void operator =(Object& object) = delete;
    private:
        Object *processGetPaper(Object *paper, std::string **content, const std::string type) noexcept;
};