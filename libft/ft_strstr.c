/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:22:31 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 12:01:25 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Localise la premiere occurence d'une chaine finis s2 dans
** une chaine finis s1
** Param #1 chaine
** Param #2 chaine a cherche dans s1
** Retour s1 si s2 est vide, NULL si s2 n est pas dans s1
** Sinon retourne un pointeur sur la premiere occurence de s2
*/

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int nb;
	char *tmp;

	if (!*s2)
		return ((char *)(s1));
	while (*s1)
	{
		nb = 0;
		if (*s1 == *(s2 + nb))
		{
			tmp = (char *)s1;
			while (*s1 && *(s2 + nb) == *s1 && *(s2 + nb))
			{
				s1++;
				nb++;
				printf("%s\n", s1);
			}
			if (!*(s2 + nb))
				return ((char *)(s1 - nb));
			s1 = tmp;
		}
		s1++;
	}
	return (NULL);
}
