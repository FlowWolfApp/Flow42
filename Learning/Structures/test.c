/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fspano <fspano@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:01:43 by fspano            #+#    #+#             */
/*   Updated: 2020/11/19 10:01:51 by fspano           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "lib_ft.c"

int		main(int argc, char *argv[])
{
	perso flow;
	coordonnates point;
	perso player[2];
	int i;

	i = 0;
	flow.age = 30;
	flow.lifes = 1;
	if (!(flow.name = (char *)malloc(sizeof(char) * 100)))
		return (0);
	flow.name = "Flow";
	flow.size = 178;

	point.x = 0;
	point.y = 0;
	point.z = 0;
	
	printf("Ton nom est %s\n", flow.name);

	while (i < 2)
	{
		if (!(player[i].name = (char *)malloc(sizeof(char) * 100)))
			return (0);
		printf("What is your name P%d ?", i + 1);
		scanf("%s", player[i].name);
		printf("What is your age P%d ?", i + 1);
		scanf("%d", &player[i].age);
		printf("What is your size P%d ?", i + 1);
		scanf("%d", &player[i].size);
		i++;
	}
	i = 0;
	while (i < 2)
	{
		printf("P%d is called %s, he is %d yo and he is %d cm tall.\n",
		 i + 1, player[i].name, player[i].age, player[i].size);
		i++;
	}

	return (0);
}