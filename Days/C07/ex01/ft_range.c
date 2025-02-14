#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min) + 1);
	if (!tab)
		return (0);
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
/*
#include <stdio.h>
int	main(void)
{
	int	*tab = ft_range(2, 20);
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (tab == 0)
		return (0);
	while (tab[i])
		i++;
	while (j < i)
	{
		printf("%d", tab[j]);
		j++;
	}
}*/
