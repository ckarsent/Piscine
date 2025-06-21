/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:29:59 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:16:56 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min) + 1);
	if (!(*range))
		return (-1);
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (max - min);
}
