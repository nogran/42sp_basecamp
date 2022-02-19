/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manoguei <manoguei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 21:30:36 by manoguei          #+#    #+#             */
/*   Updated: 2022/02/17 18:43:03 by manoguei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	char			aux;

	i = 0;
	aux = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		aux = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (aux);
		i++;
	}
	return (aux);
}
