
#include <unistd.h>

/* função que mostra o alfabeto em minúsculo, numa única linha, em ordem decrescente */

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
