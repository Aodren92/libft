/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:36:27 by abary             #+#    #+#             */
/*   Updated: 2015/12/05 22:21:53 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			nb;
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	nb = 0;
	tmp_dst = dst;
	tmp_src = src;;
	while (nb < n)
	{
		*(tmp_dst + nb) = *(tmp_src + nb);
		if ((unsigned char)c == *(tmp_src + nb))
		{
			return ((tmp_dst + nb + 1));
		}
		nb++;
	}
	return (NULL);
}
