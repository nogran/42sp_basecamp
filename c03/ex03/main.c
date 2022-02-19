#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[] = "dois";
	char	buf[15] = "um ";
	char	*dest;
	int	n;
	n = 2;
	
	dest = ft_strncat(buf, src, n);

	printf("total: '%s'\n", dest);
}

//pode definir o tamanho da parada, de bytes que vao concatenar da string src na dest
//strcat()  function  appends  the src string to the dest string