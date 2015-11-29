/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:10:02 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:27:17 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	nb;

	new = (char *)malloc(sizeof(char *) * ft_strlen(s) + 1);
	nb = 0;
	if (!new)
		return (0);
	if (f)
	{
		while (*s)
		{
			*(new + nb) = f(nb, *s);
			s++;
			nb++;
		}
		*(new + nb) = '\0';
		return (new);
	}
	return (0);
}
