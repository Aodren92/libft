/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:20:16 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copie la chaine src dans dst
** Param #1 chaine de destination
** Paran #2 chaine a copier
** Retour dst
*/

char	*ft_strcpy(char *dst, const char *src)
{
	unsigned int nb;

	nb = 0;
	while (*(src))
	{
		dst[nb] = *src;
		src++;
		nb++;
	}
	dst[nb] = *src;
	return (dst);
}
