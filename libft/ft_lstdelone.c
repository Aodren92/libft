/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:40:41 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:30:56 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prend en paramètre l’adresse d’un pointeur sur un maillon
** et libère la mémoire du contenu de ce maillon avec la fonction del
** passée en paramètre puis libère la mémoire du maillon
** en lui même avec free(3).
** La mémoire du champ next ne doit en aucun cas être libérée.
** Pour terminer, le pointeur sur le maillon maintenanti
** libéré doit être mis à NULL (de manière similaire à
** la fonction ft_memdel de la partie obligatoire).
** Param. #1 L’adresse d’un pointeur sur le maillon à libérer.
** Retour Rien.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *elem = *alst;
	del(elem->content, elem->content_size);
	free(elem);
	*alst = 0;
}
