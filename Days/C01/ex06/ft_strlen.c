/*include<stdio.h>*/

int	ft_strlen(char *str)
	{
	int	cmp;

	cmp = 0;
	while (*str != '\0')
	{
		cmp++;
		str++;
	}
	return (cmp);
}

/*
int main (void)
{
	char str[6] = "hello";
	printf("%d",ft_strlen(&str[0]));
	return 0;
}*/
