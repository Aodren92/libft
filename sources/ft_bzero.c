/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:26:44 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 12:40:08 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	size_t		nb;

	nb = 0;
	while (n > 0)
	{
		*((unsigned char *)s + nb) = 0;
		n--;
		nb++;
	}
}
