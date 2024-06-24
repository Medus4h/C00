
#include <unistd.h>

/* função que mostra o alfabeto em minúsculo, numa única linha, em ordem crescente */

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
