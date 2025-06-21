/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vleclerc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:04:01 by vleclerc          #+#    #+#             */
/*   Updated: 2024/08/18 12:02:44 by vleclerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int i, int j, int x, int y)
{
	if ((j == 0 && i == 0) || (i != 0 && j != 0 && j == y - 1 && i == x - 1))
		ft_putchar('A');
	else if ((j == 0 && i == x - 1) || (j == y - 1 && i == 0))
		ft_putchar('C');
	else if (j == 0 || j == y - 1 || i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

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
			print_char(i, j, x, y);
			i++;
		}
		j++;
		ft_putchar('\n');
	}
}
