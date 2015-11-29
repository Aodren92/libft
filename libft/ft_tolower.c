/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:16:55 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 18:18:55 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int	c)
{
	if (c >= 0101 && c <= 0132)
		return (c + 040);
	else
		return (c);
}
