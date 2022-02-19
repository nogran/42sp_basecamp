#include <unistd.h>
#include "ft_print_numbers.c"

int main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return(0);
}
