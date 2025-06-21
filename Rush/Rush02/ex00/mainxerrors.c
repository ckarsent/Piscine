/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainxerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <ckarsent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:18:05 by ckarsent          #+#    #+#             */
/*   Updated: 2025/06/21 17:04:45 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	decoupe(char *str, char *file);
int		count_words(char *file);
char	*ft_read(char *file, char *buff);
char	*ft_strstr(char *str, char *to_find);
void	ft_putstr(char *str, int cond);
int		ft_strlen(char *str);

int	check_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

char	*newchain(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*chain;

	i = 0;
	while (str[i] == '0')
		i++;
	j = 0;
	while (str[j])
		j++;
	if (j - i == 0)
		return ("0");
	chain = malloc(sizeof(char) * (j - i) + 1);
	if (!chain)
		return (0);
	k = 0;
	while (str[i])
	{
		chain[k] = str[i];
		k++;
		i++;
	}
	chain[k] = '\0';
	return (chain);
}

void	initialisationv2(char *chain, char *file)
{
	if (ft_strlen(chain) == 1 && chain[0] == '0')
	{
		ft_putstr(ft_strstr(file, "0"), 0);
		return ;
	}
	else
	{
		if (ft_strlen(chain) > 39)
		{
			write(1, "Dict Error\n", 11);
			return ;
		}
		decoupe(chain, file);
	}
}

void	initialisation(char *files, char *number)
{
	char	*list;
	char	*file;
	char	*chain;

	list = malloc(sizeof(char) * count_words(files));
	if (!list)
		return ;
	file = ft_read(files, list);
	if (file == NULL)
	{
		write(1, "Dict Error\n", 11);
		return ;
	}
	chain = newchain(number);
	initialisationv2(chain, file);
	if (!chain)
		free(chain);
	free(list);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc == 2 && check_arg(argv[1]) == 0)
		write(1, "Error", 5);
	else if (argc == 3 && check_arg(argv[2]) == 0)
		write(1, "Error", 5);
	else if (argc == 2)
		initialisation("numbers.dict", argv[1]);
	else if (argc == 3)
		initialisation(argv[1], argv[2]);
	return (0);
}
