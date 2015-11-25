/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:36:27 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 11:53:18 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c ,size_t n)
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
}
