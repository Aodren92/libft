/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:22:02 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 14:00:30 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
/*
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *a;
	unsigned int	nb;

	nb = 0;
	a = (unsigned char *)b;
	while (len > 0)
	{
		*(a + nb) = c;
		nb++;
		len--;
	}
	b = a;
	return (b);
}
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	nb;

	nb = 0;
	while (len > 0)
	{
		*((unsigned char *)b + nb) = c;
		nb++;
		len--;
	}
	return (b);
}
/*
void	*ft_memset(void *s, int c, size_t n)
{
	char *str;

	str = (char *)s;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}
*/
