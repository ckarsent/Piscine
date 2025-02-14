/*#include <stdio.h>*/

unsigned int	measure_size(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_src;

	i = 0;
	j = 0;
	size_src = measure_size(src);
	while (dest[i])
		i++;
	if (size <= i)
		return (size_src + size);
	while (src[j] && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dest[i + j] = '\0';
	return (size_src + i);
}

/*
int	main(void)
{
	char	d[200];
	char	c;
	c = 'h'; 
	d[0] = c;
	char	s[20] = "world";
	printf("%d", ft_strlcat(d, s, 20));
	printf("%s", d);
}*/

/*
int	main(int argc, char **argv)
{
	if (argc != 4)
		return 0
	ft_strlcat(argv[1], argv[2], argv[3]);
}*/
