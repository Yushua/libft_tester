/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ybakker <ybakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 01:34:55 by ybakker       #+#    #+#                 */
/*   Updated: 2021/11/04 18:56:49 by ybakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include   "libft.h"

void    ft_strlen_tester(void)
{
    const char *str = "hello";
    size_t     i = 0;
    size_t     y = 0;

    i = strlen(str);
    y = ft_strlen(str);

    printf("1\n");
    str = NULL;
    i = 0;
    y = 0;

    i = strlen(str);
    printf("2\n");
    y = ft_strlen(str);
    printf("3\n");

    printf("len == [%zu] ftlen == [%zu]\n", i, y);
}

int     ft_while_loop(int argc, char **argv)
{
    int i = 2;
    while (i <= argc)
    {
        if (strcmp(argv[i], "ft_strlen"))
            ft_strlen_tester();
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    int i = 0;

    printf("argc == [%i]\n", argc);
    if (argc == 2 && strcmp(argv[2], "fall"))
        i = 1;
    else if (argc == 2)
        i = 1;
    else if (argc > 2)
    {
        //use this to check for a number of cases you put in after the ./libft
        //example ./libft ft_strlen
        ft_while_loop(argc, argv);
        return (0);
    }
    //use this to check for one case or for all cases
    if (i == 1 || strcmp(argv[2], "ft_strlen"))
        ft_strlen_tester();
    return (0);
}
