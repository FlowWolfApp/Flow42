/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:14:45 by fspano            #+#    #+#             */
/*   Updated: 2020/11/16 14:14:45 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b;
        *mod = a % b;
    }
}

int     main(void)
{
    int a;
    int b;
    int div;
    int mod;

    a = 15;
    b = 7;
    div = 0;
    mod = 0;

    printf("a = %d, b = %d\ndiv = %d, mod = %d", a, b, div, mod);
    ft_div_mod(a, b, &div, &mod);
    printf("a = %d, b = %d\ndiv = %d, mod = %d", a, b, div, mod);

    return (0);
}