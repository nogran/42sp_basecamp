#include<unistd.h>

void	ft_putchar(char c);
int	main(void)
{
	ft_putchar('a');
	write(1, "\n", 1);
}