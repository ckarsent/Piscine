/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:32:24 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:14:26 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (ft_strlen(src));
}
