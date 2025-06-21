/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_psblts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 19:47:17 by alde-abr          #+#    #+#             */
/*   Updated: 2025/06/21 17:01:42 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_lines(int s1, int s2, int tab[s1][s2])
{
	int	i;
	int	j;
	int	is_value;

	i = 0;
	j = 0;
	is_value = 0;
	while (j < 4)
	{
		while (i < 4)
		{
			if (tab[i][j] != 0)
				is_value = 1;
			i++;
		}
		if (is_value == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		is_value = 0;
		i = 0;
		j++;
	}
	return (1);
}

int	check_columns(int s1, int s2, int tab[s1][s2])
{
	int	i;
	int	j;
	int	is_value;

	i = 0;
	j = 0;
	is_value = 0;
	while (j < 4)
	{
		while (i <= 12)
		{
			if (tab[i][j] != 0)
				is_value = 1;
			i += 4;
		}
		if (is_value == 0)
		{
			write(1, "Error", 5);
			return (0);
		}
		is_value = 0;
		i = 0;
		j++;
	}
	return (1);
}

int	check_tab(int s1, int s2, int tab[s1][s2])
{
	if (check_lines(s1, s2, tab))
		if (check_columns(s1, s2, tab))
			return (1);
	return (0);
}
