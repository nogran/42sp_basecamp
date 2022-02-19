/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 23:27:51 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/10 17:06:44 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{	
	char first[2];
	char second[2];
	char comma[2];
	char space[1];
	
	first[0] = '0';
	first[1] = '0';
	second[0] = '0';
	second[1] = '1';
	comma[0] = ',';
	comma[1] = ' ';
	space[0] = ' ';
	
	write (1, first, 2);
	write (1, space, 1);
	write (1, second, 2);
	++second[1];

	while(first[0] <= '9')
	{
		while(first[1] <= '9')
		{		
			while(second[0] <= '9')
			{
				while(second[1] <= '9')
				{
					write(1, comma, 2);
					write(1, first, 2);
					write (1, space, 1);
					write(1, second, 2);
					++second[1];
				}
				second[0]++;
				second[1] = '0';
			}
			first[1]++;
			second[1] = first[1] + 1 ;
			second[0] = '0';
		}	
		first[0] = '0';
		first[1] = first[0] + 1;
		second[1] = first[1] + 1 ;
		second[0] = '2';
	}
	first[0]++;

}