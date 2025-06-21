/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_tabs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:54:24 by alde-abr          #+#    #+#             */
/*   Updated: 2025/06/21 17:01:32 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	init_tab(int s1, int s2, int tab[s1][s2])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s1)
	{
		while (j < s2)
		{
			tab[i][j] = j + 1;
			j++;
		}
		j = 0;
		i++;
	}
}

void	debug_tab(int s1, int s2, int tab[s1][s2])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < s1)
	{
		while (j < s2)
		{
			printf("tab[%i][%i] : %i\n", i, j, tab[i][j]);
			tab[i][j] = j + 1;
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
