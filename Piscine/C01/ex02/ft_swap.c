/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_swap.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fspano <fspano@student.42lyon.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/11/16 13:43:43 by fspano			#+#	#+#			 */
/*   Updated: 2020/11/16 13:50:17 by fspano		   ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}

int		main(void)
{
	int a;
	int b;

	a = 4;
	b = 6;
	printf("a = %d, b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d, b = %d.", a, b);
}