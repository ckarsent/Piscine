/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsornin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 18:57:10 by lsornin           #+#    #+#             */
/*   Updated: 2024/09/03 18:57:13 by lsornin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_fr(char *buf, t_fr *elem)
{
	int		i;
	int		k;

	i = 0;
	while (buf[i] != '\n' && buf[i])
		i ++;
	if (i < 3)
		return (0);
	elem->f = buf[i-- - 1];
	elem->o = buf[i-- - 1];
	elem->e = buf[i-- - 1];
	k = 0;
	while (k < i && buf[k] >= 48 && buf[k] <= 57)
		elem->rmax = elem->rmax * 10 + (buf[k ++] - '0');
	if (k != i)
		return (0);
	return (1);
}

char	*ft_read_stand(void)
{
	int		space;
	char	*buffer;

	space = 30000;
	buffer = malloc(sizeof(char) * space);
	if (!buffer)
		return (NULL);
	read(0, buffer, space);
	return (buffer);
}

int	ft_read(char *s)
{
	int		fd;
	int		space;
	char	c;

	space = 0;
	fd = open(s, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &c, 1) > 0)
		space ++;
	close(fd);
	return (space);
}

char	*ft_stock(char *s, int space)
{
	int		fd;
	char	*buffer;

	fd = open(s, O_RDONLY);
	if (fd == -1)
		return (NULL);
	buffer = malloc(sizeof(char) * space);
	if (!buffer)
		return (NULL);
	read(fd, buffer, space);
	close(fd);
	return (buffer);
}

char	**ft_init2(char *s, t_fr *elem)
{
	int		j;
	int		i;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(char *) * (elem->rmax + 1));
	if (!tab)
		return (0);
	while (s[j - 1] != '\n')
		j ++;
	while (i < elem->rmax)
	{
		tab[i] = malloc(sizeof(char) * (elem->cmax + 1));
		if (!tab[i])
			return (NULL);
		k = 0;
		while (s[j] != '\n')
			tab[i][k ++] = s[j ++];
		tab[i ++][k] = '\0';
		j++;
	}
	tab[i] = 0;
	return (tab);
}
