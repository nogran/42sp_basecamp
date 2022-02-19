#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	string1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	ft_strcapitalize(string1);
	printf("%s", string1);
	printf("\noutput std: Oi, Tudo Bem? 42palavras Quarenta-E-Duas; Cinquenta+E+Um\n");
	printf("output respo: %s\n\n", ft_strcapitalize(string1));
}