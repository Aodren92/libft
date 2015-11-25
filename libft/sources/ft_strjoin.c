/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:53:35 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 18:09:58 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche” terminée par un ’\0’ résultant de la concaténation de s1 et s2. Si l’allocation echoue, la fonction renvoie NULL.*/

#include "../includes/libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	char *str;
	unsigned int	nb;

	nb = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char *) * nb + 1);
	if (!str)
		return (0);
	nb = 0;
	while (*s1)
	{
		*(str + nb) = *s1;
		s1++;
		nb++;
	}
	while (*s2)
	{
		*(str + nb) = *s2;
		s2++;
		nb++;
	}
	*(str + nb) = '\0';
	return (str);
}
