/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:51:43 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/06 18:03:34 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	show_numbers;

	show_numbers = '0';
	while (show_numbers <= '9')
	{
		write(1, &show_numbers, 1);
		show_numbers++;
	}
}
