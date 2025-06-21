/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:48:30 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:14:20 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fst;

	i = 0;
	fst = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122 && fst == 1)
		{
			str[i] -= 32;
			fst = 0;
		}
		else if (str[i] >= 65 && str[i] <= 90 && fst == 1)
			fst = 0;
		else if (str[i] >= 65 && str[i] <= 90 && fst == 0)
			str[i] += 32;
		else if (str[i] >= 48 && str[i] <= 57)
			fst = 0;
		else if (str[i] < 97 || str[i] > 122)
			fst = 1;
		i++;
	}
	return (str);
}
