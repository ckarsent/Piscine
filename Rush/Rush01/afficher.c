/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   afficher.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:25:39 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/21 17:03:41 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	afficher(int **tab)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			nb = tab[i][j] + '0';
			write(1, &nb, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	argument(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i % 2 == 1))
			return (1);
		if (i % 2 == 0 && (str[i] > '4' || str[i] < '1'))
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	**tableaumalloc(void)
{
	int	i;
	int	**tab;

	i = 0;
	tab = malloc(4 * sizeof(int *));
	while (i < 4)
	{
		tab[i] = malloc(4 * sizeof(int *));
		i++;
	}
	return (tab);
}

void	tableaufree(int **tab)
{
	int	i;

	i = 0;
	while (1 < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	main(int **tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}
