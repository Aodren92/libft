/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:46:00 by abary             #+#    #+#             */
/*   Updated: 2015/11/23 16:02:42 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	unsigned int nb;

	nb = 0;
	while (*(src))
	{
		dst[nb] = *src;
		src++;
		nb++;
	}
	dst[nb] = *src;
	return (dst);
}