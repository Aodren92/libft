/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:36:27 by abary             #+#    #+#             */
/*   Updated: 2015/12/02 16:30:14 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	nb;

	nb = 0;
	if (src && dst)
	{
		while (n > 0 && ((unsigned char)c != *((unsigned char *)src)))
		{
			*((unsigned char *)dst + nb) = *((unsigned char *)src);
			n--;
			nb++;
			src++;
		}
		if ((unsigned char)c == *((unsigned char *)src) && n > 0)
		{
			return (dst + ++nb);
		}
		else
			return (NULL);
	}
	return (NULL);
}
