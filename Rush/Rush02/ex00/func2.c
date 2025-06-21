/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nduval <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 18:26:07 by nduval            #+#    #+#             */
/*   Updated: 2024/09/01 18:26:10 by nduval           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str, int cond);
char	*ft_strstr(char *str, char *to_find);

int	ft_nbrlen(int val)
{
	int	i;
	int	count;

	i = val;
	count = 0;
	while (i >= 10)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int val)
{
	char	*nb;
	int		count;

	count = ft_nbrlen(val);
	nb = malloc(sizeof(char) * (count) + 1);
	if (!nb)
		return (0);
	if (count == 2)
	{
		nb[0] = ((val / 100) + '0');
		nb[1] = (((val % 100) / 10) + '0');
		nb[2] = (((val % 10)) + '0');
	}
	else if (count == 1)
	{
		nb[0] = (((val % 100) / 10) + '0');
		nb[1] = (((val % 10)) + '0');
	}
	else if (count == 0)
		nb[0] = (((val % 10)) + '0');
	return (nb);
}

int	ft_atoi(char *str, char *end)
{
	int	total;

	total = 0;
	while (str != end)
	{
		total = total * 10 + *str - '0';
		str++;
	}
	return (total);
}

void	centainev2(int val, int cond, char *file)
{
	if (val % 10 != 0)
	{
		ft_putstr(ft_strstr(file, ft_itoa((val / 10) * 10)), 1);
		ft_putstr(ft_strstr(file, ft_itoa(val % 10)), cond);
	}
	else
		ft_putstr(ft_strstr(file, ft_itoa((val / 10) * 10)), cond);
}

void	centaine(char *str, char *end, char *file, int cond)
{
	int	val;

	val = ft_atoi(str, end);
	if ((val / 100) > 0)
	{
		if (val / 100 != 0)
		{
			ft_putstr(ft_strstr(file, ft_itoa(val / 100)), 1);
		}
		val = val % 100;
		if (val != 0)
			ft_putstr(ft_strstr(file, "100"), 1);
		else
			ft_putstr(ft_strstr(file, "100"), cond);
	}
	if (val < 20 && val != 0)
		ft_putstr(ft_strstr(file, ft_itoa(val)), cond);
	else if (val >= 20 && val != 0)
		centainev2(val, cond, file);
}
