/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:23:05 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/15 15:20:51 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	string1[] = "onlylower";
	char	string2[] = "lowerUPPER";
	char	string3[] = "!!!!";
	char	string4[] = "";
	char	string5[] = "UPPER";
	
	ft_str_is_lowercase(string1);
	ft_str_is_lowercase(string2);
	ft_str_is_lowercase(string3);
	ft_str_is_lowercase(string4);
	printf("lower test: %d\n", ft_str_is_lowercase(string1));
	printf("lower and upper test: %d\n", ft_str_is_lowercase(string2));
	printf("another test: %d\n", ft_str_is_lowercase(string3));
	printf("empty test: %d\n", ft_str_is_lowercase(string4));
	printf("UPPER: %d\n", ft_str_is_lowercase(string5));
}
