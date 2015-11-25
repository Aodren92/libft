/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:02:05 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 12:06:18 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	nb;

	nb = 0;
	while (len > 0)
	{
		*((unsigned char *)dst + nb) = *((unsigned char *)src + nb);
		nb++;
		len--;
	}
	return (dst);
}
