#include <stdio.h>

int ft_str_is_numeric(char *str);

char nbr[] = "091234567";
char others[] = "!!!!";
char empty[] = "";

int	main(void)
{
	ft_str_is_numeric(nbr);
	ft_str_is_numeric(others);
	ft_str_is_numeric(empty);
	printf("------------ex03------------\n\n");
	printf("Retorne 1 para apenas numeros\n");
	printf("Retorne 0 para outros tipos de caracteres\n\n");
	printf("Apenas numero: %d\n", ft_str_is_numeric(nbr));
	printf("Outros: %d\n", ft_str_is_numeric(others));
	printf("String vazia: %d\n", ft_str_is_numeric(empty));
	printf("----------------------------\n\n");
}