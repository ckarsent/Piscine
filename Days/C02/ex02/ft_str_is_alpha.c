/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:43:50 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:13:52 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alph;

	alph = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || (str[i] > 90 && str[i] < 97) || str[i] < 65)
		{
			alph = 0;
			return (alph);
		}
		i++;
	}
	return (alph);
}
