/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:09:39 by abary             #+#    #+#             */
/*   Updated: 2015/12/04 14:35:54 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*result;
	unsigned int	nb;

	nb = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * nb + 1);
	if (!result)
		return (NULL);
	nb = 0;
	while (*s1)
	{
		*(result + nb) = *s1;
		s1++;
		nb++;
	}
	*(result + nb) = '\0';
	return (result);
}
