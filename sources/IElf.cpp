/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** IElf
*/

#include "IElf.hpp"

IElf::IElf(IConveyerBelt *conveyer, ITable *table) noexcept
{
    _table = table;
    _iConveyerBelt = conveyer;
}

Object *IElf::getToy() const noexcept
{
    std::string **content = _table->look();
    size_t indexToy = 0;

    for (; content[indexToy]; indexToy++)
        if (*content[indexToy] == std::string("Pony") || *content[indexToy] == std::string("Teddy"))
            break;
    delete[] content;
    return (_table->take(indexToy));
}

Object *IElf::processGetPaper(Object *paper, std::string **content,
    const std::string type) noexcept
{
    paper = _iConveyerBelt->take();
    if (!paper) return (nullptr);
    if (paper->getType().data() == type) return (paper);
    if (!_table->put(paper)) return (nullptr);
    return (processGetPaper(paper, content, type));
}

Object *IElf::getGiftPaper(const std::string type) noexcept
{
    std::string **content = _table->look();
    size_t  indexToy = 0;
    bool isGoodType = 0;
    Object *paper;

    while (content[indexToy])
        if (content[indexToy]->data() == type) {
            isGoodType = true;
            break;
        }
    delete[] content;
    if (isGoodType) return (_table->take(indexToy));
    return (processGetPaper(paper, content, type));
}

Box *IElf::getBox() noexcept
{
    return (dynamic_cast<Box*>(getGiftPaper(std::string("Box"))));
}