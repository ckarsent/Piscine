#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
int main (void)
{
	char str[6] = "hello";
	ft_putstr(&str[0]);
	return 0;
}*/
