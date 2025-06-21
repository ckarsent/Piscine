/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:15:55 by nduval            #+#    #+#             */
/*   Updated: 2024/09/01 17:10:08 by nduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_read(char *file, char *buff);
void	ft_putstr(char *str);
int		count_words(char *file);

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*list;

	size = 0;
	while (src[size])
		size++;
	list = malloc(sizeof(char) * (size) + 1);
	if (list == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		list[i] = src[i];
		i++;
	}
	list[i] = '\0';
	return (list);
}

char	*cut_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i] == ' ')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] == ' ')
		i++;
	return (&str[i]);
}

char	*cut_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	str[i] = '\0';
	return (cut_word(str));
}

char	*ft_strstr(char *dup, char *to_find)
{
	int		cpt;
	int		cpt2;
	char	*str;

	str = ft_strdup(dup);
	cpt = 0;
	cpt2 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[cpt] != '\0')
	{
		if (str[cpt] == to_find[cpt2])
		{
			if (to_find[cpt2 + 1] == '\0')
			{
				return (cut_str(&str[cpt - cpt2]));
			}
			cpt2++;
		}
		else
			cpt2 = 0;
		cpt++;
	}
	free(str);
	return (0);
}
