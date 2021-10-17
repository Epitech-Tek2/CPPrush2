/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** functionnalTest
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Object.hpp"
#include "LittlePony.hpp"
#include "Teddy.hpp"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

static void functionTestOne() {
    LittlePony poney{"happy pony"};
    poney.isTaken();
}
Test(test_pony_unvailable_take, test_print, .init=redirect_all_stdout)
{
    functionTestOne();
    cr_assert_stdout_eq_str("yo man\n");
}