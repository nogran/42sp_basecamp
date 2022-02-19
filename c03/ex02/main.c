#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int main(void)
{
	char str[] = "mais texto dois";
	char buf[30] = "texto um ";
	char *dest;
	
	dest = ft_strcat(buf, str);

	printf("buf: '%s'\n", dest);
}

/* The  strcat()  function  appends  the src string to the dest string, overwriting the terminating null byte
       ('\0') at the end of dest, and then adds a terminating null byte.  The strings may not  overlap,  and  the
       dest  string  must have enough space for the result.
*/