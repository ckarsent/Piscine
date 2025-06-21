/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:32:42 by vleclerc          #+#    #+#             */
/*   Updated: 2024/08/18 10:48:57 by vleclerc         ###   ########.fr       */
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
			if ((i == 0 || i == (x - 1)) && j == 0)
				ft_putchar('A');
			else if ((i == 0 || i == (x - 1)) && j == (y - 1))
				ft_putchar('C');
			else if ((i == 0 || i == x - 1) && (j != 0 || j != y - 1))
				ft_putchar('B');
			else if (((0 < i) || (i < x -1)) && (j == 0 || j == y - 1))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
