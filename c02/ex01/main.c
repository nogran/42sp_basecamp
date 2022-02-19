#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char dest[9];
	char src[9] = "ola mundo";
	int	n;
	n = 9;
	ft_strncpy(dest, src, n);
	printf("------------ex01------------\n\n");
	printf("source: %s\n", src);
	printf("dest: %s\n", dest);
	printf("----------------------------\n\n");
}