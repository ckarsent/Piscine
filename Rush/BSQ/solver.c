/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 16:31:12 by ckarsent          #+#    #+#             */
/*   Updated: 2024/09/03 16:31:16 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_check(int r, int c, t_fr elem, t_solv solv)
{
	int	temp;

	temp = c;
	while (c >= solv.c && solv.tab[r][c])
	{
		if (solv.tab[r][c --] == elem.o)
			return (1);
	}
	while (r >= solv.r && solv.tab[r][temp])
	{
		if (solv.tab[r--][temp] == elem.o)
			return (1);
	}
	return (0);
}

int	ft_max_cube(t_solv solv, t_fr e)
{
	int	r_d;
	int	c_d;

	r_d = solv.r;
	c_d = solv.c;
	if (solv.tab[solv.r][solv.c] == e.o)
		return (0);
	r_d ++;
	c_d ++;
	while (r_d < e.rmax && c_d < e.cmax && ft_check(r_d, c_d, e, solv) == 0)
	{
		r_d ++;
		c_d ++;
	}
	r_d --;
	c_d --;
	return (ft_area(r_d, solv.r));
}

t_sol	ft_solve(t_solv solv, t_fr elem, t_sol sol)
{
	int	area;

	if (solv.r == elem.rmax)
		return (sol);
	else if (solv.c == elem.cmax)
	{
		solv.r ++;
		solv.c = 0;
		return (ft_solve(solv, elem, sol));
	}
	else
	{
		area = ft_max_cube(solv, elem);
		if (area > sol.area)
		{
			sol.area = area;
			sol.x = solv.r;
			sol.y = solv.c;
		}
		solv.c ++;
		return (ft_solve(solv, elem, sol));
	}
}
