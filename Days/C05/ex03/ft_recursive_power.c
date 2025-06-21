/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:43:00 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:16:02 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 1)
		return (res);
	return (nb * ft_recursive_power(nb, power - 1));
}
