/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:30:42 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 13:41:00 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"


void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	nb;

	nb = 0;
	while (n > 0)
	{
		if (*((unsigned char *)s + nb) == c)
				return (((void *)s + nb));
		n--;
		nb++;
	}
	return (0);
}
