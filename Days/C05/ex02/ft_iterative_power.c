/*#include <stdio.h>*/

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdlib.h>
int	main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
}*/
