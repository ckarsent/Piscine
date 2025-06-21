/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:09:06 by ckarsent          #+#    #+#             */
/*   Updated: 2024/08/14 18:15:41 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		write (1, &lettre, 1);
		lettre--;
	}
}
