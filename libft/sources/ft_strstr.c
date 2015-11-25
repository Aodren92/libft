/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 14:22:31 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 14:05:36 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//incomplet
//verif le pointeur retourner -creation dun pointeur-
char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int nb;

	if (!*s2)
		return ((char *)(s1));
	while (*s1)
	{
		nb = 0;
		if (*s1 == *(s2 + nb))
		{
			while (*s1 && *(s2 + nb) == *s1 && *(s2 + nb))
			{
				s1++;
				nb++;
			}
			if (!*(s2 + nb))
				return ((char *)(s1 - nb));
		}
		s1++;
	}
	return (0);
}
