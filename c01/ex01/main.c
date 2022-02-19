#include <stdio.h>

void ft_ultimate_ft(int *********nbr);
int main(void)
{
	int a = 4;
	int *b = &a;
	int **c = &b;
	int ***d = &c;
	int ****e = &d;
	int *****f = &e;
	int ******g = &f;
	int *******h = &g;
	int ********i = &h;
	int *********j = &i;

	printf("antes = apontando p 4: %d\n", *********j);
	ft_ultimate_ft(j);
	printf("depois da funcao passou a ser 42: %d\n", *********j);
}
