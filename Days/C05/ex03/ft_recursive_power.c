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
/*
int	main(void)
{
	printf("%d", ft_recursive_power(-99, 0));
}*/
