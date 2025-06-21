/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:48:19 by ckarsent          #+#    #+#             */
/*   Updated: 2024/09/02 17:55:02 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_empty(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (i > 0)
			return (1);
		i ++;
	}
	return (0);
}

int	ft_first_line(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i ++;
	if (s[i + 1] && s[i + 1] != '\0')
		return (1);
	return (0);
}

int	ft_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] > 126) && str[i] != 10)
			return (0);
		i++;
	}
	return (1);
}

int	ft_rows_cols(char *str, t_fr *elem)
{
	int	i;
	int	cmpt;
	int	k;

	k = 0;
	i = 0;
	cmpt = 0;
	while (str[i])
	{
		if (str[i] != '\n')
			k ++;
		if (str[i] == '\n' && cmpt == 1)
			elem->cmax = k;
		if (str[i] == '\n' && cmpt > 1 && k != elem->cmax)
			return (0);
		if (str[i] == '\n')
		{
			cmpt++;
			k = 0;
		}
		i ++;
	}
	if (elem->rmax == cmpt - 1)
		return (1);
	return (0);
}

int	ft_check_elem(t_fr *elem)
{
	if (elem->o == elem->f || elem->o == elem->e)
		return (0);
	if (elem->e == elem->f)
		return (0);
	return (1);
}
