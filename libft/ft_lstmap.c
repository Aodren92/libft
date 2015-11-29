/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 11:31:32 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 13:47:27 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** Parcourt la liste lst en appliquant à chaque maillon la fonc- tion f
** et crée une nouvelle liste “fraiche” avec malloc(3) résultant
** des applications successives.
** Si une allocation échoue, la fonction renvoie NULL.
** Param. #1 Pointeur sur le premier maillon d’une liste.
** Param. #2 L’adresse d’une fonction à appliquer à
** chaque maillon de la liste pour crér une nouvelle liste.
** Retour La nouvelle liste.
*/

t_list		*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *map;

	t_list *tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp)
		{
			map = NULL;
			map = (t_list *)malloc(sizeof(t_list));
			map = f(tmp);
			printf("%s\n", (char *)map->content);
			if (map)
				ft_lstadd(&map, map);
			else
				return (NULL);
		}

	}
	return (map);
}
