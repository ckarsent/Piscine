/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:07:04 by nduval            #+#    #+#             */
/*   Updated: 2025/06/21 17:04:33 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);
char	*ft_read(char *file, char *buff);
int		count_words(char *file);
void	ft_putstr(char *str, int cond);
void	centaine(char *str, char *end, char *file, int cond);
char	*taille(int size);
int		end_char(char *str);
int		ft_strlen(char *str);

typedef struct t_point
{
	char	*str;
	char	*file;
	int		i;
	int		cond;
	int		j;
}	t_point;

int	condition(char *str)
{
	int	end;
	int	count;
	int	len;

	end = end_char(str);
	len = ft_strlen(str);
	count = 0;
	if (len % 3 != 0)
	{
		end -= len % 3;
		count++;
	}
	while (end > 0)
	{
		end -= 3;
		count++;
	}
	return (count);
}

int	c(int i)
{
	int	count;

	count = i / 3;
	if (i % 3 != 0)
		count++;
	return (count);
}

void	decoupev2(t_point p1, int end)
{
	while (p1.j < end)
	{
		if (p1.j == end - 1)
			p1.cond = 0;
		if (p1.j == 0 && p1.i % 3 != 0)
		{
			if (!(p1.cond) && p1.j != c(p1.i) - 1)
				centaine(p1.str, p1.str + (p1.i % 3), p1.file, 1);
			else
				centaine(p1.str, p1.str + (p1.i % 3), p1.file, p1.cond);
			p1.str = p1.str + (p1.i % 3);
		}
		else
		{
			if (!(p1.cond) && p1.j != c(p1.i) - 1)
				centaine(p1.str, p1.str + 3, p1.file, 1);
			else
				centaine(p1.str, p1.str + 3, p1.file, p1.cond);
			p1.str = p1.str + 3;
		}
		if (p1.j != c(p1.i) - 1)
			ft_putstr(ft_strstr(p1.file, taille(c(p1.i) - p1.j - 1)), p1.cond);
		(p1.j)++;
	}
}

void	decoupe(char *str, char *file)
{
	int		i;
	int		end;
	int		cond;
	t_point	p1;

	i = ft_strlen(str);
	end = condition(str);
	cond = 1;
	p1.str = str;
	p1.file = file;
	p1.i = i;
	p1.cond = cond;
	p1.j = 0;
	decoupev2(p1, end);
}
