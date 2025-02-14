/*#include<stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
int main(void)
{
	int div;
	int mod;
	ft_div_mod(11, 3, &div, &mod);
	printf("%d %d", div, mod);
}*/
