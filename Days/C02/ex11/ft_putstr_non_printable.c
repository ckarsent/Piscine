#include<unistd.h>

void	ft_print_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
	if (str[i] < 32 || str[i] > 126)
		ft_print_hexa(str[i]);
	else
		write(1, &str[i], 1);
	i++;
	}
}

/*
int	main(void)
{
	char	test[22] = "Coucou(\xbe)tu vas bien ?";

	ft_putstr_non_printable(test);
}*/
