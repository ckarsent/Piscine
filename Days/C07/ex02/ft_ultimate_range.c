#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min) + 1);
	if (!(*range))
		return (-1);
	while (i < max)
	{
		(*range)[j] = i;
		i++;
		j++;
	}
	return (max - min);
}
/*
#include <stdio.h>

int	main(void)
{
	int	**tab;
	int	i;

	i = 0;
	tab = malloc(sizeof(int *) * 1);
	ft_ultimate_range(tab, -20, -10);
	while (i < 10)
	{
		printf("%d\n", tab[0][i]);
		i++;
	}
	printf("%d", ft_ultimate_range(tab, -20, -10));
}*/
