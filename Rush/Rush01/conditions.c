/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:42:55 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/20 18:40:31 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_union(char *arg)
{
	int	i;
	int	j;

	i = 0;
	if ((arg[0] != '1' && arg[16] == '1') || (arg[0] == '1' && arg[16] != '1'))
		return (1);
	if ((arg[6] != '1' && arg[24] == '1') || (arg[6] == '1' && arg[24] != '1'))
		return (1);
	if ((arg[8] != '1' && arg[22] == '1') || (arg[8] == '1' && arg[22] != '1'))
		return (1);
	if ((arg[14] != 49 && arg[30] == 49) || (arg[14] == 49 && arg[30] != 49))
		return (1);
	while (arg[i] && i < 25)
	{
		j = i + 2;
		while (j <= i + 6 && j < 30)
		{
			if (arg[i] == arg[j] && arg[i] == 49)
				return (1);
			if ((arg[i] == arg[j] && arg[i] == 52))
				return (1);
		}
		i += 8;
	}
	return (0);
}

int	ft_no_solves(char *arg)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (arg[i] && i < 24)
	{
		if (i == 8)
			i += 7;
		j = i + 8;
		if (arg[i] >= '1' && arg[i] <= '4')
		{
			k = arg[i];
			if ((k - '0') + (arg[j] - '0') > 5)
				return (0);
			if ((k == arg[j] && k == '1') || (k == arg[j] && k == '4'))
				return (0);
			if ((k == '4' && arg[j] != '1') || (k != '4' && arg[j] == '1'))
				return (0);
		}
		i++;
	}
	if (ft_union(arg))
		return (0);
	return (1);
}
