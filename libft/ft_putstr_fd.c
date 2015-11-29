/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 12:15:40 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 12:21:03 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Ecrit la chaine s sur le descripteur de fichier fd.
** Param. #1 La chaine de caractères à écrire.
** Retour rien
**/

void	ft_putstr_fd(char const *s, int fd)
{
		write(fd, s, ft_strlen(s));
}
