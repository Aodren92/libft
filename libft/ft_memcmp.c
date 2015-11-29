/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:41:26 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:25:21 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{

	unsigned int	nb;

	nb = 0;
	while (n > 0)
	{
		if (*((unsigned char *)s1 + nb) != *((unsigned char *)s2 + nb))
				return (*((unsigned char *)s1 + nb) - *((unsigned char *)s2 + nb));
		nb++;
		n--;
	}

	return (0);
}
