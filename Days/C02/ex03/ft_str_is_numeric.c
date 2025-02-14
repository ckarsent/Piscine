/*#include <stdio.h>*/

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	alph;

	alph = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			alph = 0;
			return (alph);
		}
		i++;
	}
	return (alph);
}

/*
int	main(void)
{
	char	*str;

	str = "";
	printf("%d", ft_str_is_numeric(str));
}*/
