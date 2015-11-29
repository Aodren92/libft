/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:51:23 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:31:11 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon
** et libère la mémoire de ce maillon et celle
** de tous ses succes- seurs l’un après l’autre avec del et free(3).
** Pour terminer, le pointeur sur le premier maillon maintenant libéré
** doit être mis à NULL (de manière similaire à la fonction
** ft_memdel de la partie obligatoire).
** Param. #1 L’adresse d’un pointeur sur le
** premier maillon d’une liste à libérer.
** Retour Rien.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
		t_list *elem = *alst;
		t_list *tmp;

		while (elem)
		{
			tmp = elem;
			elem = elem->next;
			if (tmp)
				ft_lstdelone(&tmp, del);
		}
		*alst = 0;
}
