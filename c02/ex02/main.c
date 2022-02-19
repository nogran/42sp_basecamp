#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char string[] = "textoteste";
	char string2[] = "TEXTOTESTE";
	char string3[] = "testoTESTE";
	char string4[] = "texto!!!";
	char string5[] = "";

	printf("------------ex02------------\n\n");
	printf("Retorne 1 para caracteres alfabéticos\n");
	printf("Retorne 0 para outros tipos de caracteres\n\n");
	printf("Teste penas minusculo: %d\n", ft_str_is_alpha(string));
	printf("Teste apenas maiusculo: %d\n", ft_str_is_alpha(string2));
	printf("Teste minusculo e maiusculo: %d\n", ft_str_is_alpha(string3));
	printf("Teste char especial: %d\n", ft_str_is_alpha(string4));
	printf("Teste string vazia: %d\n\n", ft_str_is_alpha(string5));
	printf("----------------------------\n\n");
}