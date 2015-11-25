/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 20:58:11 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 21:50:32 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"
/* Alloue (avec malloc(3)) et retourne une chaine de caractères “fraiche” terminée par un ’\0’ représentant l’entier n passé en paramètre. Les nombres négatifs doivent être gérés. Si l’al- location échoue, la fonction renvoie NULL.*/


int		ft_dizaine(int n)
{
		int dizaine;

		dizaine = 1;
		while (n > 0)
		{
			n /= 10;
			if (n > 0)
				dizaine *= 10;
		}
		return (dizaine);
}
int	    ft_size(int n)
{
	int size;

	size = 0;
	while (n > 0)
	{
		n /= 10;
		size++;
	}

		return (size);
}
char *ft_itoa(int n)
{
		int dizaine;
		int size;
		char *number;
		int i;

		i = 0;
		dizaine = ft_dizaine(n);
		size = ft_size(n);
		printf("%d", );
		number = (char *)malloc(sizeof(char) * size + 1);
		if (n < 0)
		{
			*number = '-';
			i++;
			size++;
		}
		while (i < size)
		{
			*(number + i) = '0' + (n / dizaine);

			n %= dizaine;
			dizaine /= 10;
			i++;
		}
		*(number + i) = '\0';
		return (number);
}
