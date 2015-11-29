/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:34:35 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:20:51 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** fais une copie d'une chaine finis s2 a la fin d'une chaine finis s1 et
** ajoute un '\0'
** Param #1 chaine
** Param #2 chaine a ajouter a la fin de s1
** Retour Concatenation de s1 et s2\
*/

char	*ft_strcat(char *s1, const char *s2)
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
