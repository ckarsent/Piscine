/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int main(void)
{
	int a=3;
	int b=6;
	ft_swap(&a,&b);
	printf("%d %d", a, b);
	return 0;
}*/
