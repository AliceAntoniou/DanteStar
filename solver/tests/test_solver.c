/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

#include <criterion/criterion.h>
#include "solver.h"
#include "lib.h"

Test(main_f, map1)
{
    char *av[] = {"./solver/solver", "../map/map-1.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(main_f, map2)
{
    char *av[] = {"./solver/solver", "../map/map-2.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(main_f, map3)
{
    char *av[] = {"./solver/solver", "../map/map-3.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(main_f, map4)
{
    char *av[] = {"./solver/solver", "../map/map-4.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(main_f, one_path_map)
{
    char *av[] = {"./solver/solver", "../map/one_path_map.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(main_f, no_solution)
{
    char *av[] = {"./solver/solver", "../map/no_solution.txt"};
    char *map = my_reader(av[1]);
    int res = solver(map);

    cr_assert_eq(res, 0);
}

Test(size_line, no_slashzero)
{
    char *map = "test";
    int res = size_line(map);

    cr_assert_eq(res, 4);
}

Test(test_end, basic)
{
    int res = test_end(2, 5, 2, 4);

    cr_assert_eq(res, 1);
}