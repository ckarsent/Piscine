/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:31:20 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:15:02 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	while (to_find[j])
		j++;
	i = 0;
	if (j == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strncmp(&str[i], to_find, j) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
