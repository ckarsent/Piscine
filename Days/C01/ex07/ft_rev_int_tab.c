/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*
int main(void)
{
	int tab[4] = {1, 4, 8, 2};
	int i;
	ft_rev_int_tab(tab, 4);
	for (i = 0; i < 4; i++)
	{
		printf("%d", tab[i]);
	}
	return 0;
}*/
