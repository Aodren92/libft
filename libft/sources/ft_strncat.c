/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:43:10 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 10:15:22 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *restrict s1, const char *s2, size_t n)
{
	unsigned int nb;

	nb = 0;
	while (*(s1 + nb))
	{
		nb++;
	}
	while (*s2 && n > 0)
	{
		*(s1 + nb) = *s2;
		s2++;
		nb++;
		n--;
	}
	*(s1 + nb) = '\0';
	return (s1);
}
