/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 14:30:50 by abary             #+#    #+#             */
/*   Updated: 2015/11/24 17:01:02 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int nb;
	int dizaine;
	int signe;

	nb = 0;
	dizaine = 10;
	signe = -1;
	while (*str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			signe *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb *= dizaine;
		nb -= (*str - 48);
		str++;
	}
	return (nb * signe);
}
/*
   int		ft_atoi(const char *str)
   {
   int nb;
   int dizaine;
   int signe;

   nb = 0;
   dizaine = 10;
   signe = -1;
   while (*str)
   {
   while ((*str == '\t' || *str == '\n' || *str == '\v'
   || *str == '\f' || *str == '\r' || *str == ' ') && signe == -1)
   str++;
   if (*str == 45 && signe == -1 && nb == 0)
   signe *= -1;
   if (*str >= 48 && *str <= 57)
   {
   nb *= dizaine;
   nb -= (*str - 48);
   }
   if (((*str < 48 || *str > 57) && *str != 45) || (nb != 0 && *str == 45))
   return (nb * signe);
   str++;
   }
   return (nb * signe);
   }
   */
