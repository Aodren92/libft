/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sources?ft_strlcat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 10:39:39 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 11:42:00 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
//a revoir
size_t		ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
			size_t length;

			length = ft_strlen(dst) + 1;
			if (length < size)
				ft_strncat(dst, src, size - length);
			return (length - 1 + ft_strlen(src));
}
