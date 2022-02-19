#include <stdio.h>

void ft_ft(int *nbr);
int main()
{
	int a = 0;
	int *pa = &a;

	printf("%d\n", a);

	ft_ft(pa);
	printf("%d\n", a);	// 0 por 42
	printf("%p\n", pa);	//endereco da variavel a
	printf("%p\n", &pa); //endereco do ponteiro na memoria
}