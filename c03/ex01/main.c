#include <stdio.h>

int    ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	char s1[] = "351";
	char s2[] = "355";
	printf("------------ex01------------\n");
    printf("\ns1 - s2 = %d\n", ft_strncmp(s1, s2, 6));
	printf("%s - %s = %d\n", s1, s2, ft_strncmp(s1, s2, 6));

	char s3[] = "355";
	char s4[] = "355";
    printf("\ns1 - s2 = %d\n", ft_strncmp(s3, s4, 6));
	printf("%s - %s = %d\n\n", s3, s4, ft_strncmp(s3, s4, 6));
	printf("----------------------------\n");
}