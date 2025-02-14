/*#include<stdio.h>*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	src[7] = "COU1COU";
	printf("%s", ft_strlowcase(src));
}*/
