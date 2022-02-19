/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:55:17 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/06 17:56:00 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	reverse_count;

	reverse_count = 'z';
	while (reverse_count >= 'a')
	{
		write(1, &reverse_count, 1);
		reverse_count--;
	}
}
