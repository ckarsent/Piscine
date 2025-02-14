/*#include <stdio.h>*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i <= 46340 && i * i <= nb)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(81));
}*/
