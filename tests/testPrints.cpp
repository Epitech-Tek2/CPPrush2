/*
** EPITECH PROJECT, 2021
** B-CPP-300-STG-3-1-CPPrush2-ethan.de-maeyer
** File description:
** testPrints
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

static void printTakePony() {LittlePony poney{"happy pony"}; poney.isTaken();}
Test(test_pony_take, test_print, .init=redirect_all_stdout)
{
    printTakePony();
    cr_assert_stdout_eq_str("yo man\n");
}

static void printUnvailableTakePony() {LittlePony poney{"happy pony"}; poney.isTaken();poney.isTaken();}
Test(test_pony_unvailable_take, test_print, .init=redirect_all_stdout)
{
    printUnvailableTakePony();
    cr_assert_stdout_eq_str("yo man\n");
}