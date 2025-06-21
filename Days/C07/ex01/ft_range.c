/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 18:35:18 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:16:51 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min) + 1);
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
