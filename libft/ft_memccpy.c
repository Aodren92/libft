/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:36:27 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 17:31:00 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memccpy(void *dst, const void *src, int c ,size_t n)
{
	unsigned int	nb;

	nb = 0;
	while (n  > 0)
	{
		if (c == *((unsigned char *)src + nb))
			return (dst);
		else
			*((unsigned char *)dst + nb) = *((unsigned char *)src + nb);
		n--;
		nb++;
	}

	return (0);
}*/

void	*ft_memccpy(void *dst, const void *src, int c ,size_t n)
{
	unsigned int	nb;

	nb = 0;
	while (n  > 0 && ((unsigned char)c != *((unsigned char *)src)))
	{
		*((unsigned char *)dst + nb) = *((unsigned char *)src);
		n--;
		nb++;
		src++;
	}
	if ((unsigned char)c == *((unsigned char *)src))
		return (dst + ++nb);
	else
		return (0);
}
