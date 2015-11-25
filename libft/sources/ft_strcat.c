/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:34:35 by abary             #+#    #+#             */
/*   Updated: 2015/11/23 18:09:36 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	unsigned int nb1;

	nb1 = 0;
	while (*(s1 + nb1))
	{
		nb1++;
	}
	while (*(s2))
	{
		*(s1 + nb1) = *s2;
		s2++;
		nb1++;
	}
	*(s1 + nb1) = *s2;
	return (s1);
}
