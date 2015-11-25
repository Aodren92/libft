/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 19:11:46 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 20:57:23 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/*Alloue (avec malloc(3)) et retourne un tableau de chaines de caractères “fraiches” (toutes terminées par un ’\0’, le tableau également donc) résultant de la découpe de s selon le caractère c. Si l’allocation echoue, la fonction retourne NULL. Exemple : ft_strsplit("*salut*les***etudiants*", ’*’) renvoie le tableau ["salut", "les", "etudiants"].*/
unsigned int	nbr_of_words(char const *s, char c)
{
	unsigned int (nbw);

	nbw = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			nbw++;
			while (*s && *s != c)
				s++;
		}
	}
	return (nbw);
}

unsigned int	len_of_words(char const *s, char c, unsigned int nb_wrd)
{
	unsigned int len;
	unsigned int word;

	len = 0;
	word = 0;
	while (*s)
	{
		while (*s && *s ==c)
			s++;
		if (*s && *s != c)
		{
			word++;
			while (*s && *s != c)
			{
				if ( word == nb_wrd)
					len++;
				s++;
			}
		}
	}
	return (len);
}
char  *one_word(char const *s, char c , unsigned int nb_wrd, char *one_word)
{
	unsigned int word;
	unsigned int nb;

	nb = 0;
	word = 0;
	while (*s)
	{
			while (*s && *s ==c)
				s++;
		if (*s && *s != c)
		{
			word++;
			while (*s && *s != c)
			{
				if ( word == nb_wrd)
				{
					*(one_word + nb) = *s;
					nb++;
				}
				s++;
			}
		}
	}
	*(one_word + nb) = '\0';
	return (one_word);
}
char **ft_strsplit(char const *s, char c)
{
	char **str;
	unsigned int nbw;
	unsigned int ln_wrd;
	unsigned int i;

	i = 1;
	nbw = nbr_of_words(s, c);
	str = (char **)malloc(sizeof(char *) * nbw);
	if (!str)
		return (0);
	while (i <= nbw)
	{
		ln_wrd = len_of_words(s, c, i);
		*(str + i)= (char *)malloc(sizeof(char ) * ln_wrd + 1);
		one_word(s, c, i, *(str+ i));
		printf("%s\n", *(str + i));
		i++;
	}
	return (str);
}
