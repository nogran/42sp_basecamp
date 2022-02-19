/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 13:53:34 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/06 14:33:15 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print_alphabet.c"

int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return(0);
}
