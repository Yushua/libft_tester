/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ybakker <ybakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 01:34:04 by ybakker       #+#    #+#                 */
/*   Updated: 2021/11/03 01:55:29 by ybakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include   "libft.h"

size_t    ft_strlen(const char *s)
{
    size_t i;

    i = 0;

    while (s[i])
    {
        i++;
    }
    return (i);
}