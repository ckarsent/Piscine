#include <stdlib.h>

int	ft_strlen_strs(char **strs)
{
	int	i;
	int	j;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			cmpt++;
			j++;
		}
		i++;
	}
	return (cmpt);
}

int	ft_strlen_sep(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_strlen_strs1d(char **strs)
{
	int	i;
	int	j;
	int	cmpt;

	i = 0;
	cmpt = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
			j++;
		i++;
		cmpt++;
	}
	return (cmpt);
}

char	*ft_conca(int size, char **strs, char *st, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j] && i < size)
			st[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			st[k++] = sep[j++];
		i++;
	}
	st[k] = '\0';
	return (st);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*st;

	i = ft_strlen_strs(strs);
	j = ft_strlen_sep(sep);
	k = ft_strlen_strs1d(strs);
	if (size == 0 || size < 0)
	{
		st = malloc(1);
		st[0] = '\0';
		return (st);
	}
	if (size < k)
		st = malloc((sizeof(char) * i) + (sizeof(char) * j * (k - 1)) + 1);
	else
		st = malloc((sizeof(char) * i) + (sizeof(char) * j * (size - 1)) + 1);
	if (!st)
		return (NULL);
	st = ft_conca(k, strs, st, sep);
	return (st);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	(void)argc;
	char *sep = "< . >";
	int size = 2;
	char *test = ft_strjoin(size, &argv[1], sep);
	printf("%s", test);
}*/
