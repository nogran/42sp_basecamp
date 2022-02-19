#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "123";
	char dest[] = "";
	printf("valor: %d\n", ft_strlcpy(dest, src, 99));
}