/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 08:19:44 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:17:03 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen_strs(char **strs)
{
	int	i;
	int	j;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			cmpt++;
			j++;
		}
		i++;
	}
	return (cmpt);
}

int	ft_strlen_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_strlen_strs1d(char **strs)
{
	int	i;
	int	j;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			j++;
		i++;
		cmpt++;
	}
	return (cmpt);
}

char	*ft_conca(int size, char **strs, char *strsnew, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j] && i < size)
			strsnew[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			strsnew[k++] = sep[j++];
		i++;
	}
	strsnew[k] = '\0';
	return (strsnew);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*strsnew;

	i = ft_strlen_strs(strs);
	j = ft_strlen_sep(sep);
	k = ft_strlen_strs1d(strs);
	if (size == 0 || size < 0)
	{
		strsnew = malloc(1);
		strsnew[0] = '\0';
		return (strsnew);
	}
	strsnew = malloc((sizeof(char) * i) + (sizeof(char) * j * (k - 1)) + 1);
	if (!strsnew)
		return (NULL);
	strsnew = ft_conca(k, strs, strsnew, sep);
	return (strsnew);
}
