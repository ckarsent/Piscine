/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(2));
	printf("%d", ft_fibonacci(3));
	printf("%d", ft_fibonacci(4));
	printf("%d", ft_fibonacci(5));
	printf("%d", ft_fibonacci(6));
	printf("%d", ft_fibonacci(7));
}*/
