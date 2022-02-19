#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	string1[] = "onlylower";
	char	string2[] = "lowerUPPER";
	char	string3[] = "!!!!";
	char	string4[] = "";
	char	string5[] = "UPPER";
	char	string6[] = "	";
	
	ft_str_is_printable(string1);
	ft_str_is_printable(string2);
	ft_str_is_printable(string3);
	ft_str_is_printable(string4);
	ft_str_is_printable(string5);
	printf("lower test: %d\n", ft_str_is_printable(string1));
	printf("lower and upper test: %d\n", ft_str_is_printable(string2));
	printf("another test com !!!: %d\n", ft_str_is_printable(string3));
	printf("empty test: %d\n", ft_str_is_printable(string4));
	printf("UPPER: %d\n", ft_str_is_printable(string5));
	printf("char nao printavel: %d\n", ft_str_is_printable(string6));
}