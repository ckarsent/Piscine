/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 09:03:25 by lsornin           #+#    #+#             */
/*   Updated: 2025/06/20 18:38:47 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_solv	init_t_solv(void)
{
	t_solv	solv;

	solv.r = 0;
	solv.c = 0;
	solv.tab = 0;
	return (solv);
}

t_sol	init_t_sol(void)
{
	t_sol	sol;

	sol.x = 0;
	sol.y = 0;
	sol.area = 0;
	return (sol);
}

t_fr	init_t_fr(void)
{
	t_fr	elem;

	elem.o = 0;
	elem.e = 0;
	elem.f = 0;
	elem.rmax = 0;
	elem.cmax = 0;
	return (elem);
}
