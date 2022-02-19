#include <unistd.h>
#include "ft_print_reverse_alphabet.c"

int main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return(0);
}
