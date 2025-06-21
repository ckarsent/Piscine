/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:53:35 by ckarsent          #+#    #+#             */
/*   Updated: 2024/08/22 08:54:13 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (argv[j])
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	if (argc != j)
		return (0);
}
