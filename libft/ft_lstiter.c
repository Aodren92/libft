/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 11:23:16 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:31:46 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parcourt la liste lst en appliquant à chaque maillon la fonc- tion f.
** Param. #1 Pointeur sur le premier maillon d’une liste.
** Param. #2 L’adresse d’une fonction à laquelle appliquer
** chaque maillon de la liste.
** Param. #2 L’adresse d’une fonction à laquelle appliquer
** chaque maillon de la liste.
** Retour rien
*/

void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tmp;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp)
			f(tmp);
	}
}
