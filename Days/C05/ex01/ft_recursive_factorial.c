/*#include <stdio.h>*/

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (res);
	else
		return (res * (ft_recursive_factorial(nb - 1)));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(1));
}*/
