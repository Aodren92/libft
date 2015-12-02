/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:24:54 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 19:40:07 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	nb;
	char			*str;

	if (!s)
		return (NULL);
	nb = 0;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	while (start > 0)
	{
		s++;
		start--;
	}
	while (len > 0)
	{
		*(str + nb) = *s;
		len--;
		s++;
		nb++;
	}
	return (str);
}
