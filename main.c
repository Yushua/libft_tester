/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ybakker <ybakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 01:34:55 by ybakker       #+#    #+#                 */
/*   Updated: 2021/11/07 20:56:18 by ybakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include   "libft.h"
# include <string.h>

void    ft_strlen_tester(void)
{
    printf("---- f_strlen tester ----\n\n");
    const char *str = "hello";
    size_t     i = 0;
    size_t     y = 0;

    i = strlen(str);
    y = ft_strlen(str);

    printf("len == [%zu] ftlen == [%zu]\n\n", i, y);
}

void    ft_test_1(void)
{
    printf("---- f_strlen tester ----\n\n");

    printf("len == [%zu] ftlen == [%zu]\n\n", i, y);
}

void    ft_test_2(void)
{
    printf("---- f_strlen tester ----\n\n");

    printf("len == [%zu] ftlen == [%zu]\n\n", i, y);
}

void    ft_test_3(void)
{
    printf("---- f_strlen tester ----\n\n");

    printf("len == [%zu] ftlen == [%zu]\n\n", i, y);
}

int     ft_while_loop(int argc, char **argv)
{
    int i = 1;
    while (i < argc)
    {
        //setup for each test to see how it works
        if (!strcmp(argv[i], "ft_strlen"))
            ft_strlen_tester();
        else if (!strcmp(argv[i], "ft_strlen"))
            ft_test_1();
        else if (!strcmp(argv[i], "ft_strlen"))
            ft_test_2();
        else if (!strcmp(argv[i], "ft_strlen"))
            ft_test_3();
        else
            printf("argument invalid [%s] i == [%i]\n", argv[i], strcmp(argv[i], "ft_strlen"));
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int i = 0;

    printf("argc = [%i]\n", argc);
    if (argc == 2 && strcmp(argv[1], "fall"))
    {
        i = 1;
    }
    else if (argc == 2)
    {
        i = 1;
    }
    else if (argc > 2)
    {
        //use this to check for a number of cases you put in after the ./libft
        //example ./libft ft_strlen
        ft_while_loop(argc, argv);
        return (0);
    }
    //use this to check for one case or for all cases
    if (i == 1 || strcmp(argv[1], "ft_strlen"))
        ft_strlen_tester();
    else if (i == 1 || strcmp(argv[1], "ft_strlen"))
        ft_test_1();
    else if (i == 1 || strcmp(argv[1], "ft_strlen"))
        ft_test_2();
    else if (i == 1 || strcmp(argv[1], "ft_strlen"))
        ft_test_3();
    return (0);
}
