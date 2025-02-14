#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			write(1, &((char){a / 10 + '0'}), 1);
			write(1, &((char){a % 10 + '0'}), 1);
			write(1, " ", 1);
			write(1, &((char){b / 10 + '0'}), 1);
			write (1, & ((char){b % 10 + '0'}), 1);
			(a != 98 || b != 99) && write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
