#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char one[] = "123";
	char two[] = "pastel_carne";
	char three[] = "pastel_flango";
	int i;
	
	printf("\ns1: %s, s2: %s, s3: %s\n\n", one, two, three);

	i = ft_strcmp(one, one);
	printf("s: '%s' - '%s' = '%d'\n", one, one, i);
	i = ft_strcmp(one, three);
	printf("s: '%s' - '%s' = '%d'\n", one, three, i);
	i = ft_strcmp(three, two);
	printf("s: '%s' - '%s' = '%d'\n\n", three, two, i);
}