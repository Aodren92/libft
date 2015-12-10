/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 09:11:06 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 12:17:25 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_size(int nb)
{
	int		size;

	size = 0;
	while (nb != 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

static int			ft_dizaine(int nb)
{
	int		dizaine;

	dizaine = 1;
	while (nb != 0)
	{
		nb /= 10;
		if (nb != 0)
			dizaine *= 10;
	}
	return (dizaine);
}

void				ft_putnbr(int n)
{
	int		dizaine;
	int		size;
	int		i;

	i = 0;
	if (n == 0)
		ft_putchar('0');
	else
	{
		dizaine = ft_dizaine(n);
		size = ft_size(n);
		if (n < 0)
			ft_putchar('-');
		while (i < size)
		{
			ft_putchar('0' + ft_abs(n / dizaine));
			n %= dizaine;
			dizaine /= 10;
			i++;
		}
	}
}
