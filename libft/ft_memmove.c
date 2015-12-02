/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:02:05 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 12:43:42 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str;

	str = (unsigned char *)malloc(sizeof(unsigned char) * len);
	if (str)
	{
		ft_memcpy(str, src, len);
		ft_memcpy(dst, str, len);
		free(str);
	}
	else
		return (NULL);
	return (dst);
}
