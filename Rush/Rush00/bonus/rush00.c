/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 10:56:56 by vleclerc          #+#    #+#             */
/*   Updated: 2024/08/18 10:58:23 by vleclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 || i == (x - 1)) && (j == 0 || (j == (y - 1))))
				ft_putchar('o');
			else if ((i == 0 || i == x - 1) && (j != 0 || j != y - 1))
				ft_putchar('|');
			else if (((0 < i) || (i < x -1)) && (j == 0 || j == y - 1))
				ft_putchar('-');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
