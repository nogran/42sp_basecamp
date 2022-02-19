#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main()
{
	char src[] = "texto pa";
	char dest[10];
	printf("------------ex00------------\n\n");
	printf("source: %s, dest: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("source: %s, dest: %s\n", src, dest);
	printf("----------------------------\n\n");
}