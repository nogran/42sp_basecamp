#include <stdio.h>

int a = 100;
int b = 200;
void ft_div_mod(int a, int b, int *div, int *mod);
int	main(void)
{
	printf("before\t div: %d\t mod: %d\n", a, b);
	ft_div_mod(10, 2, &a, &b);
	printf("after\t div: %d\t mod: %d\n", a, b);
} 