/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 21:29:09 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/18 02:20:13 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (to_find[n] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + n] == to_find[n] && str[i + n] != '\0')
			n++;
		if (to_find[n] == '\0')
			return (str + i);
		i++;
		n = 0;
	}
	return (0);
}
