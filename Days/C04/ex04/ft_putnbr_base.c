#include <unistd.h>

int	conditions(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	long int	nb;

	i = 0;
	nb = nbr;
	while (base[i])
		i++;
	if (base[0] == '\0' || i == 1)
		return ;
	else if (conditions(base) == 1)
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb >= i)
		{
			ft_putnbr_base(nb / i, base);
			ft_putnbr_base(nb % i, base);
		}
		else
			write(1, &(base[nb]), 1);
	}
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
}*/
