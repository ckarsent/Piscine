/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:10:36 by ckarsent          #+#    #+#             */
/*   Updated: 2024/08/14 19:10:43 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positif;
	char	negatif;

	positif = 'P';
	negatif = 'N';
	if (n >= 0)
	{
		write(1, &positif, 1);
	}
	else
	{
		write(1, &negatif, 1);
	}
}
