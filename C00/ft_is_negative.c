/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:50:38 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 12:50:38 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
    if (n >= 0)
        ft_putchar('P');
    else if (n < 0)
        ft_putchar('N');
    else
    {
        ft_putchar('X');
    }
}

int     main(int argc, char *argv[])
{
    if (argc = 2)
        ft_is_negative(argv[2]);
    return (0);
}