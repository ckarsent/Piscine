/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alph;

	alph = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
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
	printf("%d", ft_str_is_uppercase(str));
}*/
