
#include <unistd.h>

/* função que mostra todos os dígitos, numa única linha, em ordem crescente */

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
