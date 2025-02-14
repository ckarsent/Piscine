#include <unistd.h>

void	ft_print_numbers(void)
{
	char	nombre;

	nombre = '0';
	while (nombre <= '9')
	{
		write (1, &nombre, 1);
		nombre++;
	}
}
