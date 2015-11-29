/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:45:28 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 16:33:10 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//a verif sur le pointeur de retour
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int nb;
	char *tmp;
	unsigned int nbtmp;

	if (!*s2)
		return ((char *)(s1));
	while (*s1 && n > 0)
	{
		nb = 0;
		if (*s1 == *(s2 + nb))
		{
			tmp = (char *)s1;
			nbtmp = n;
			while (*s1 && *(s2 + nb) == *s1 && *(s2 + nb) && n > 0)
			{
				n--;
				s1++;
				nb++;
			}
			if (!*(s2 + nb))
				return ((char *)(s1 - nb));
			s1 = tmp;
			n = nbtmp;
		}
		n--;
		s1++;
	}
	return (0);
}
