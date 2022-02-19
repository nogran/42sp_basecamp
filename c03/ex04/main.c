#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "ssssssstring para teste";
	char to_find[] = "ing";
	char *resultado;
	resultado = ft_strstr(str, to_find);
	printf("encontrado: '%s'\n", resultado);
}

//locate a substring in a strig (acha o comeco e mostra ate o final)

/* char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0') --> retorna so a string pois nao esta pesquisando nada
		return (str);
	while (str[i] != '\0')  --> percorre a string 
	{
		while (str[i + j] == to_find[j])  --> e procura o to_find (equanto i +j for o que encontrar na to find)
		{
			if (to_find[j + 1] == '\0')  --> procura o null byte e j + 1 para um antes
				return (str + i);        --> retorna na posicao se encontrar 
			j++;
		}
		i++;
	}
	return (0);  --> se a string nao for encontrada retorna null
}

*/