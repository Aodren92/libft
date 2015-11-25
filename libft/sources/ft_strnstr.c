/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 13:45:28 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 14:26:02 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//a verif sur le pointeur de retour
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int nb;

	if (!*s2)
		return ((char *)(s1));
	while (*s1 && n > 0)
	{
		nb = 0;
		if (*s1 == *(s2 + nb))
		{
			while (*s1 && *(s2 + nb) == *s1 && *(s2 + nb) && n > 0)
			{
				n--;
				s1++;
				nb++;
			}
			if (!*(s2 + nb))
				return ((char *)(s1 - nb));
		}
		n--;
		s1++;
	}
	return (0);
}
