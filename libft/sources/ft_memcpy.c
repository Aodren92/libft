/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:11:00 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 11:34:48 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
