/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:54:59 by alde-abr          #+#    #+#             */
/*   Updated: 2025/06/21 17:03:05 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_tab(int s1, int s2, int tab[s1][s2]);
void	erase_imp(int s1, int s2, int tab[s1][s2], char *prms);
void	debug_tab(int s1, int s2, int tab[s1][s2]);

int	main(int argc, char *argv[])
{
	int		boxes[16][4];
	char	*prms;

	prms = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	init_tab(16, 4, boxes);
	erase_imp(16, 4, boxes, prms);
	debug_tab(16, 4, boxes);
}
