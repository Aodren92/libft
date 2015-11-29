/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:58:11 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 12:26:08 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_dizaine(int n)
{
	int		dizaine;

	dizaine = 1;
	while (n != 0)
	{
		n /= 10;
		if (n != 0)
			dizaine *= 10;
	}
	return (dizaine);
}

static int			ft_size(int n)
{
	int		size;

	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int			ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}

static char		*ft_iota_pos(int nb, int size, int dizaine, char *number)
{
	int		i;

	i = 0;
	number = (char *)malloc(sizeof(char) * size + 1);
	if (nb < 0)
	{
		*number = '-';
		i++;
	}
	while (i < size)
	{
		*(number + i) = '0' + ft_abs((nb / dizaine));
		nb %= dizaine;
		dizaine /= 10;
		i++;
	}
	*(number + i) = '\0';
	return (number);
}

char		*ft_itoa(int n)
{
	int		dizaine;
	int		size;
	char	*number;

	dizaine = ft_dizaine(n);
	size = ft_size(n);
	number = NULL;
	if (size != 0)
		number = ft_iota_pos(n, size, dizaine, number);
	else
	{
		number = (char *)malloc(sizeof(char) * 2);
		*number = '0';
		*(number + 1) = '\0';
	}
	return (number);
}
