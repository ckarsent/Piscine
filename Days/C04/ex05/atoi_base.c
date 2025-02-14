int	verif(char *base)
{
	int	j;
	int	k;

	j = 0;
	while(base[j])
	{
		k = j + 1;
		if (base[j] == '+' || base[j] == '-')
			return (0);
		while (base[k])
		{
			if (base[j] == base[k])
				return (0);
			else
				k++;
		}
		j++;
	}
	return (1);
}

int	ft_ind(char *str, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (*str == base[j])
			return (j);
		j++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	verif_str(char *str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (*str == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	k;
	int	res;

	i = 0;
	j = 0;
	k = ft_strlen(base);
	res = 0;
	while ((str[i] == ' ' || (str[i] > 8 && str[i] < 14)) && str[i])
		i++;
	while ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] && verif_str(&str[i], base))
	{
		res = res * k + (ft_ind(&str[i], base));
		i++;
	}
	if (j % 2 == 1)
		return (-res);
	return (res);
}

#include <stdio.h>

int	main(void)
{
	printf("%i", ft_atoi_base("ff", "0123456789abcdef"));
	return (0);
}
