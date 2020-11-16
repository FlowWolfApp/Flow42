/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_ft.c											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fspano <fspano@student.42lyon.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/11/16 13:19:00 by fspano			#+#	#+#			 */
/*   Updated: 2020/11/16 13:25:07 by fspano		   ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int     main()
{
	int alfa;
	alfa = 2;

	printf("%d\n", alfa);
	ft_ft(&alfa);
	printf("%d\n", alfa);
}