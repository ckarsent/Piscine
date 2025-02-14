/*#include<stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}

/*
int main(void)
{
	int tab[4]={2,6,3,1};
	int i=0;
	ft_sort_int_tab(tab, 4);
	while (i<4)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}*/
