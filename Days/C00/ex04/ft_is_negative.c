#include <unistd.h>

voidft_is_negative(int n)
{
	char	positif;
	char	negatif;

	positif = 'P';
	negatif = 'N';
	if (n >= 0)
	{
		write(1, &positif, 1);
	}
	else
	{
		write(1, &negatif, 1);
	}
}
