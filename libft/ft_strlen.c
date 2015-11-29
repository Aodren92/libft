/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:03:01 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:19:12 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Calcule la longueur d'une chaine de caractere
** Param 1 chaine de caractere
** Retour taille de la chaine
*/

size_t		ft_strlen(const char *s)
{
	size_t nb;

	nb = 0;
	while (*s)
	{
		nb++;
		s++;
	}
	return (nb);
}
