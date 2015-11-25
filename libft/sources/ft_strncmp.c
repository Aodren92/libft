/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:15:00 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 14:24:29 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	comp;
	comp = 0;

	while (*s1 && n > 0)
	{
		comp = *s1 - *s2;
		if (comp != 0)
			return (comp);
		s1++;
		s2++;
		n--;
	}
	return (comp);
}
