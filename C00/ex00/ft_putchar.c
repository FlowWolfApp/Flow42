/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_putchar.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: fspano <fspano@student.42lyon.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2020/11/16 11:15:50 by fspano			#+#	#+#			 */
/*   Updated: 2020/11/16 12:17:18 by fspano		   ###   ########lyon.fr   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main()
{
	ft_putchar('a');
}