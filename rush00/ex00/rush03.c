/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfagunde <sfagunde@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 20:44:38 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/06 22:40:26 by sfagunde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x)
{
	int	var_count_b;

	var_count_b = x;
	if (x > 0)
	{
		ft_putchar('A');
		while (var_count_b > 2)
		{
			ft_putchar('B');
			var_count_b--;
		}
		if (x > 1)
		{
			ft_putchar('C');
		}
		ft_putchar('\n');
	}
}

void	second_line(int x)
{
	int	var_count_space;

	var_count_space = x;
	if (x > 0)
	{
		ft_putchar('B');
		while (var_count_space > 2)
		{
			ft_putchar(' ');
			var_count_space--;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	var_count_second_line;

	var_count_second_line = y;
	if (y > 1)
	{
		first_line(x);
		while (var_count_second_line > 2)
		{
			second_line(x);
			var_count_second_line--;
		}
		first_line(x);
	}
	else if (y == 1)
	{
		first_line(x);
	}
}
