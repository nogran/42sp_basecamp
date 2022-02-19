/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 03:35:47 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/08 12:07:46 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];
	char	space[2];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	space[0] = ',';
	space[1] = ' ';
	write (1, number, 3);
	++number[2];
	while (number[0] <= '7')
	{
		while (number[1] <= '8')
		{
			while (number[2] <= '9')
			{
				write (1, space, 2);
				write (1, number, 3);
				++number[2];
			}
			number[2] = ++number[1] + 1;
		}
		number[1] = ++number[0] + 1;
		number[2] = number[1] + 1;
	}
}
