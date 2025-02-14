/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fst;

	i = 0;
	fst = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122 && fst == 1)
		{
			str[i] -= 32;
			fst = 0;
		}
		else if (str[i] >= 65 && str[i] <= 90 && fst == 1)
			fst = 0;
		else if (str[i] >= 65 && str[i] <= 90 && fst == 0)
			str[i] += 32;
		else if (str[i] >= 48 && str[i] <= 57)
			fst = 0;
		else if (str[i] < 97 || str[i] > 122)
			fst = 1;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	charstr[63] = "HELLO";
	printf("%s",ft_strcapitalize(str));
}*/

