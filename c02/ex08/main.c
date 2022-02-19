#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	string1[] = "onlylower";
	char	string2[] = "lowerUPPER";
	char	string3[] = "!!!!";
	char	string4[] = "";
	char	string5[] = "UPPER";
	
	ft_strlowcase(string1);
	ft_strlowcase(string2);
	ft_strlowcase(string3);
	ft_strlowcase(string4);
	ft_strlowcase(string5);
	printf("lower test: %s\n", ft_strlowcase(string1));
	printf("lower and upper test: %s\n", ft_strlowcase(string2));
	printf("another test: %s\n", ft_strlowcase(string3));
	printf("empty test: %s\n", ft_strlowcase(string4));
	printf("UPPER: %s\n", ft_strlowcase(string5));
}