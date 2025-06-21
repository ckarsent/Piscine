/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:54:46 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:15:31 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	i;
	int	cmpt;
	int	nb;

	i = 0;
	cmpt = 0;
	nb = 0;
	while (str[i] && ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == '-')
			cmpt++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (cmpt % 2 == 0)
		return (nb);
	else
		return (nb * (-1));
}
