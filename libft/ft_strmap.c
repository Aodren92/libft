/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:01:50 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:26:54 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
			*(new + nb) = f(*s);
			s++;
			nb++;
		}
		*(new + nb) = '\0';
		return (new);
	}
	return (0);
}
