#include <stdio.h>

void ft_swap(int *a, int *b);
int	main(void)
{
	int a;
	a = 4;
	int b = 2;

	int	*c = &a; //ponteiro c vai ter o endereco de memoria de a
	int	*d = &b;

	printf("before \ta: %d b: %d\n", a, b); //tabulacao
	ft_swap(c, d);
	printf("after \ta: %d b: %d\n", a, b);
}