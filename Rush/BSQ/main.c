/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsornin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:53:52 by lsornin           #+#    #+#             */
/*   Updated: 2024/09/04 14:53:54 by lsornin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_process_map(char *str, int flag)
{
	t_fr	elem;
	t_sol	sol;
	t_solv	solv;
	char	*s;
	char	**tab;

	solv = init_t_solv();
	sol = init_t_sol();
	elem = init_t_fr();
	if (flag == 0)
		s = valid_init(str, &elem);
	if (flag == 1)
		s = valid_init_stand(&elem);
	if (!s)
		write(1, "map error\n", 10);
	else
	{
		tab = ft_init2(s, &elem);
		solv.tab = tab;
		sol = ft_solve(solv, elem, sol);
		ft_f_tab(tab, sol, elem);
		ft_free_tab(tab);
		free(s);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (argv[i])
		{
			ft_process_map(argv[i], 0);
			i ++;
			if (argv[i])
				write(1, "\n", 1);
		}
	}
	else
		ft_process_map(argv[i], 1);
	return (0);
}
