/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:02:15 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/16 04:13:37 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (c == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			c++;
		}
		else if (c > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		else if ((str[i] < 48) || (str[i] > 57 && str[i] < 65)
			|| (str[i] > 90 && str[i] < 97) || (str[i] > 122))
			c = 0;
		else
			c++;
		i++;
	}
	return (str);
}
