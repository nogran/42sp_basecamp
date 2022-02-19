#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	string1[] = "onlylower";
	char	string2[] = "lowerUPPER";
	char	string3[] = "!!!!";
	char	string4[] = "";
	char	string5[] = "UPPER";
	
	ft_strupcase(string1);
	ft_strupcase(string2);
	ft_strupcase(string3);
	ft_strupcase(string4);
	ft_strupcase(string5);
	printf("lower test: %s\n", ft_strupcase(string1));
	printf("lower and upper test: %s\n", ft_strupcase(string2));
	printf("another test: %s\n", ft_strupcase(string3));
	printf("empty test: %s\n", ft_strupcase(string4));
	printf("UPPER: %s\n", ft_strupcase(string5));
}