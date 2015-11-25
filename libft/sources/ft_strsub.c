/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:24:54 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 17:46:10 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/*Alloue (avec malloc(3)) et retourne la copie “fraiche” d’un tronçon de la chaine de caractères passée en paramètre. Le tronçon commence à l’index start et à pour longueur len. Si start et len ne désignent pas un tronçon de chaine valide, le comportement est indéterminé. Si l’allocation échoue, la fonction renvoie NULL.*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	nb;
	char			*str;

	nb = 0;
	str = (char *)malloc(sizeof(char *) * len + 1);
	if (!str)
		return (0);
	while (start > 0)
	{
		s++;
		start--;
	}
	while (len > 0)
	{
		*(str + nb) = *s;
		len--;
		s++;
		nb++;
	}
	return (str);
}
