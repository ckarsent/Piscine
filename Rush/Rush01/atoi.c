/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:33:12 by kphosara          #+#    #+#             */
/*   Updated: 2025/06/20 18:31:49 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_atoi(char *str, int size, int max_value, int tab[size][max_value])
{
	int	i;
	int	j;
	int	a;
	int	b;

	i = 0;
	j = 0;
	a = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = j * 10 + (str[i] - '0');
		}
		else if (str[i] == 32 || str[i + 1] == '\0')
		{
			if (str[i + 1] == '\0' && str[i] >= '0' && str[i] <= '9')
			{
				j = j * 10 + (str[i] - '0');
			}
			tab[a][b] = j;
			j = 0;
			b++;
		}
		if (b == max_value)
		{
			b = 0;
			a++;
			if (a == size)
			{
				break ;
			}
		}
		i++;
	}
}
