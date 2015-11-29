/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:11:00 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 11:25:04 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	nb;

	nb = 0;
	while (n > 0)
	{
		*((unsigned char *)dst + nb) = *((unsigned char *)src + nb);
		n--;
		nb++;
	}
	return (dst);
}
