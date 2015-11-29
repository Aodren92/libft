/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:02:05 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 11:26:42 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	nb;
	unsigned char	cara;

	nb = 0;
	while (len > 0)
	{
		cara = *((unsigned char *)src + nb);
		*((unsigned char *)dst + nb) = *((unsigned char *)src + nb);
		*((unsigned char *)src + nb) = cara;
		nb++;
		len--;
	}
	return (dst);
}
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str;

	str = (unsigned char *)malloc(sizeof(unsigned char ) * ft_strlen(dst) + 1);
	if (str)
	{
		ft_memcpy(str, src, len);
		ft_memcpy(dst, str, len);
	}
	return (dst);
}
