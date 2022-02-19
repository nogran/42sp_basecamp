/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 19:55:35 by desilva           #+#    #+#             */
/*   Updated: 2022/02/14 17:27:01 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>                       -> biblioteca para alocacao de memoria, importar o malloc

char    **gerar_matriz(char *argv[])
{
    char **matriz;
    int    cont;
    int    cont2;
    int i;
    int del;

    cont = 0;
    matriz = (char**)malloc(32*sizeof(char));         -> alocacao de memoria para a matriz
																32 eh o numero de bytes -> sizeof serve pra retornar o
    //char **matriz = (char**)malloc(4*sizeof(char));
    while (cont < 4)										-> repetir 4 vezes e gerar 4 colunas em cada linha 
    {
        matriz[cont] = (char*) malloc(4 * sizeof(char)); 
        cont++;										
    }
    
    cont = 0;                -> count eh para linha
    del = 6;                  
    i = 0;
    while (cont < 4)
    {
        if (argv[1][i] != ' ')
        {
            cont2 = 0;              -> count2 eh para coluna 
            while (i <= del)
            {
                matriz[cont][cont2] = argv[1][i];
                i += 2;						-> numero, espaco, pula 1
                cont2++;                          -> segundo indice da matriz 
            }
            del += 8;                     -> final da linha + espacos 
        }
        cont ++;
    }
    return (matriz);
}

int	main(int argc, char *argv[])    -> acesso a linha de comando que o programa foi chamado 
									 argc tem o numero de argumentos que a main foi chamada
									 arg v serve pra saber o numero de elementos do argc 
{ 
	char	**matriz;// = (char **) malloc(sizeof(char)*8);

	matriz = gerar_matriz(argv);    -> argv para separar os elementos na matriz
	
	write(1, &matriz[0], 4);
	printf("\n");
	write(1, &matriz[1], 4);
	printf("\n");
	write(1, &matriz[2], 4);
	printf("\n");
	write(1, &matriz[3], 4);
	printf("\n");

	//printf("%d", *matriz);
	
	printf("\n");
	printf("%d - %p\n", argc, argv);   -> o que faz?
	
}
