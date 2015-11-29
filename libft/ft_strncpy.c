/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 19:13:19 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:21:39 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copy n caractere au plus de src dans dst
** Param #1 chaine de destination
** Param #2 chaine a copier dans s2
** Param #3 nombre de caractere a copier
** Retour dst
*/

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int nb;

	nb = 0;
	while (*src && n > 0)
	{
		*(dst + nb) = *src;
		src++;
		n--;
		nb++;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			*(dst + nb) = '\0';
			n--;
			nb++;
		}
	}
	return (dst);
}
