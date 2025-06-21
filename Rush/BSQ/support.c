/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsornin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:52:24 by lsornin           #+#    #+#             */
/*   Updated: 2024/09/02 17:52:26 by lsornin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_show(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			write(1, &tab[i][j ++], 1);
		write(1, "\n", 1);
		i ++;
	}
}

void	ft_f_tab(char **tab, t_sol sol, t_fr elem)
{
	int	length_cube;
	int	col;
	int	row;

	col = sol.y;
	row = sol.x;
	length_cube = ft_sqrt(sol.area);
	while (tab[row] && row < sol.x + length_cube)
	{
		col = sol.y;
		while (tab[row][col] && col < sol.y + length_cube)
			tab[row][col ++] = elem.f;
		row ++;
	}
	ft_show(tab);
}

float	ft_sqrt(int nb)
{
	int	i;

	if (nb > 0)
	{
		i = 0;
		while (i * i < nb && i <= 46340)
			i ++;
		if (i * i == nb)
			return (i);
		else if (i * i > nb)
			return (0);
		return (0);
	}
	else
		return (0);
}

int	ft_area(int r1, int r2)
{
	return ((r1 - r2 + 1) * (r1 - r2 + 1));
}

int	ft_size_col(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\n')
		i ++;
	i ++;
	while (s[i + j] != '\n')
		j ++;
	return (j);
}
