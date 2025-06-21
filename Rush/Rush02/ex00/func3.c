/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 11:47:18 by nduval            #+#    #+#             */
/*   Updated: 2024/09/01 17:33:59 by nduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str, int cond)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	if (cond)
		write(1, " ", 1);
}

int	count_words(char *file)
{
	int		fd;
	int		bytes;
	int		total;
	char	buffer[2048];

	total = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buffer, sizeof(buffer) + 1);
	while (bytes > 0)
	{
		total += bytes;
		bytes = read(fd, buffer, sizeof(buffer) + 1);
	}
	close(fd);
	return (total);
}

char	*ft_read(char *file, char *buff)
{
	int		fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	else
	{
		read(fd, buff, count_words(file) - 1);
		close(fd);
		return (buff);
	}
}
