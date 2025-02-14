#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int	ft_strlen(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen2(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i); 
}

int main(int argc, char ** argv)
{
	int k = 0;
	int i = 0;
	
	while (argv[i])
		i++;
	if (i > 2)
	{
		char ** tab = malloc(sizeof(char *) * i);
		int j = 0;
		while (j < i - 1) 
		{
			k = 0;
			tab[j] = malloc(sizeof(char) * ft_strlen2(argv[j + 1]) + 1);
			while(k < ft_strlen2(argv[j + 1]))
			{
				tab[j][k] = argv[j + 1][k];
				k++;
			}
			tab[j ++][k] = '\0';
		}
		tab[j] = 0;
		t_stock_str *tab_result = ft_strs_to_tab(argc - 1, tab);
		ft_show_tab(tab_result);
	}
}
