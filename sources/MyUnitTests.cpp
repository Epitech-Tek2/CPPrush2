/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** MyUnitTests
*/

#include "LittlePony.hpp"
#include "Teddy.hpp"
#include "Box.hpp"
#include "GiftPaper.hpp"

Object *MyUnitTests(Object **array) noexcept
{
    Teddy *teddy = dynamic_cast<Teddy*>(array[0]);
    Box *box = dynamic_cast<Box*>(array[1]);
    GiftPaper *giftPaper =  dynamic_cast<GiftPaper*>(array[2]);

    if (!box || !teddy || !giftPaper) {
        throw("Tesjgtkrdhg");
    }
    if (array == NULL)
        std::cerr << "List invalid" << std::endl;
    box->openMe();
    box->wrapMeThat(teddy);
    box->closeMe();
    giftPaper->wrapMeThat(box);

    return (giftPaper);
}