/*#include<stdio.h>*/

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i - 1] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	char    s[8] = "coucou";
	char    d[4];
	printf("%d", ft_strlcpy(d, s, 4));
	printf("%s", d);
}*/
