/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:39:39 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 12:13:12 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//a revoir
/*
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
			size_t length;

			length = ft_strlen(dst) + 1;
			if (length < size)
				ft_strncat(dst, src, size - length);
			return (length - 1 + ft_strlen(src));
}
*/
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{

	size_t length;
	size_t nb;

	nb = 0;
	//length = size - ft_strlen(dst) - 1;
	if (size > ft_strlen(dst))
	{
		length = size - ft_strlen(dst) - 1;
		while (*(dst + nb))
			nb++;
		while (length > 0)
		{
			*(dst + nb) = *src;
			nb++;
			src++;
			length--;
		}
		if(!(size < length))
		*(dst + nb) = '\0';
	}
	return (ft_strlen(dst) + ft_strlen(src) - 1);
}
