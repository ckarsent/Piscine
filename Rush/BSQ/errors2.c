/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsornin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:48:35 by lsornin           #+#    #+#             */
/*   Updated: 2024/09/04 14:48:41 by lsornin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_samechar(char *s, t_fr *elem)
{
	int	i;

	i = 0;
	while (s[i] != '\n')
		i ++;
	while (s[i])
	{
		if (s[i] != elem->o && s[i] != elem->e && s[i] != '\n')
			return (0);
		i ++;
	}
	return (1);
}

char	*valid_init(char *s, t_fr *elem)
{
	char	*str;
	int		size;

	size = ft_read(s);
	str = ft_stock(s, size);
	if (!str)
		return (0);
	if (!ft_empty(str))
		return (0);
	if (!ft_printable(str))
		return (0);
	if (!ft_first_line(str))
		return (0);
	if (!ft_fr(str, elem))
		return (0);
	if (!ft_samechar(str, elem))
		return (0);
	if (!ft_rows_cols(str, elem))
		return (0);
	if (!ft_check_elem(elem))
		return (0);
	return (str);
}

char	*valid_init_stand(t_fr *elem)
{
	char	*str;

	str = ft_read_stand();
	if (!str)
		return (0);
	if (!ft_empty(str))
		return (0);
	if (!ft_printable(str))
		return (0);
	if (!ft_first_line(str))
		return (0);
	if (!ft_fr(str, elem))
		return (0);
	if (!ft_samechar(str, elem))
		return (0);
	if (!ft_rows_cols(str, elem))
		return (0);
	if (!ft_check_elem(elem))
		return (0);
	return (str);
}
