#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);
int	main(void)
{
	int a = 7;
	int b = 2;
	printf("before divisao:\t%d\tresto: %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after divisao:\t%d\tresto: %d\n", a, b);
}