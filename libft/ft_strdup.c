/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:09:39 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:20:30 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** alloue assez de memoire pour copier la chaine s1
** Param #1 la chaine a copier
** Retour la nouvelle chaine avec la bonne memoire
*/

char	*ft_strdup(const char *s1)
{
	char			*result;
	unsigned int	nb;

	nb = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) + 1);
	if (!result)
		return (NULL);
	nb = 0;
	while (*s1)
	{
		*(result + nb) = *s1;
		s1++;
		nb++;
	}
	*(result + nb) = '\0';
	return (result);
}
