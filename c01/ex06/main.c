#include <stdio.h>

int ft_strlen(char *str);

int	main(void)
{
	char	arr[] = "texto para teste";
	int tamanho;
	tamanho = ft_strlen(arr);
	printf("%d\n", tamanho);
}