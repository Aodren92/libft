/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:11:11 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 19:11:00 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Alloue (avec malloc(3)) et retourne une copie de la chaine passée en paramètre sans les espaces blancs au debut et à la fin de cette chaine. On considère comme espaces blancs les caractères ’ ’, ’\n’ et ’\t’. Si s ne contient pas d’espaces blancs au début ou à la fin, la fonction renvoie une copie de s. Si l’allocation echoue, la fonction renvoie NULL.*/

#include "../includes/libft.h"

unsigned int	length_whitout_spaces(char const *s)
{
	unsigned int nb;

	nb = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (*s)
	{
		s++;
		nb++;
	}
	s--;
	if (nb != 0)
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
		{
			s--;
			nb--;
		}
	}
		return (nb);
}

char	*trim(char const *s, char *str, int length)
{
	unsigned int nb;

	nb = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	while (length > 0)
	{
		*(str + nb) = *s;
		s++;
		nb++;
		length--;
	}
	*(str + nb) = '\0';
	return (str);
}

char	*ft_strtrim(char const *s)
{
	char *str;
	unsigned int nb;

	nb = length_whitout_spaces(s);
	str = (char *)malloc(sizeof(char *) * nb + 1);
	if (!str)
		return (0);
	str = trim(s, str, nb);
	return (str);

}
