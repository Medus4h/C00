
#include <unistd.h>

/* função que mostra o caractere passado como parametro */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar('s');
	write(1, "\n", 1);
	return (0);
}
