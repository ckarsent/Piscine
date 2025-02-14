/*#include <stdio.h>*/

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		while (nb > 1)
		{
			res = res * (nb - 1);
			nb--;
		}
		return (res);
	}
}

/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(1));
}*/
