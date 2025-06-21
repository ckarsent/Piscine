/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:08:10 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:37:57 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_print_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
