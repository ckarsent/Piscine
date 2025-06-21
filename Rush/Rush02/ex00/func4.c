/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 20:57:47 by ckarsent          #+#    #+#             */
/*   Updated: 2024/09/01 20:57:53 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*taille(int size)
{
	int		i;
	char	*list;
	int		j;

	i = 3;
	list = malloc(sizeof(char) * (size * i) + 1);
	if (!list)
		return (NULL);
	list[0] = '1';
	j = 1;
	while (j < i * size + 1)
	{
		list[j] = '0';
		j++;
	}
	return (list);
}

int	end_char(char *str)
{
	int	i;
	int	val;

	i = 1;
	while (str[i - 1])
	{
		if (str[i - 1] != '0')
			val = i;
		i++;
	}
	return (val);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
