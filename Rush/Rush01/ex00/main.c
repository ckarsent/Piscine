/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alde-abr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:54:59 by alde-abr          #+#    #+#             */
/*   Updated: 2024/08/25 11:55:01 by alde-abr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	init_tab(int s1, int s2, int tab[s1][s2]);
void	erase_imp(int s1, int s2, int tab[s1][s2], char *prms);
int		check_tab(int s1, int s2, int tab[s1][s2]);

int	argument(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i % 2 == 1))
			return (1);
		if (i % 2 == 0 && (str[i] > '4' || str[i] < '1'))
			return (1);
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	int		boxes[16][4];
	char	*prms;

	if (argc != 2)
	{
		write(1, "Error", 5);
		return (0);
	}
	if (argument(argv[1]))
	{
		write(1, "Error", 5);
		return (0);
	}
	init_tab(16, 4, boxes);
	erase_imp(16, 4, boxes, argv[1]);
	if (!check_tab(16, 4, boxes))
		return (0);
}
