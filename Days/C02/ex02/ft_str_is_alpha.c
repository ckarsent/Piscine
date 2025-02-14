/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alph;

	alph = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || (str[i] > 90 && str[i] < 97) || str[i] < 65)
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

	str = "hel1o";
	printf("%d", ft_str_is_alpha(str));
}*/
