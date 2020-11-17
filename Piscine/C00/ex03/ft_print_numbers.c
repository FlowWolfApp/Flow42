/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_numbers.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fspano <fspano@student.42lyon.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/11/16 12:14:48 by fspano			#+#	#+#			 */
/*   Updated: 2020/11/16 14:52:06 by fspano		   ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		ft_putchar(a + 48);
		a++;
	}
}

int main(void)
{
	ft_print_numbers();
}