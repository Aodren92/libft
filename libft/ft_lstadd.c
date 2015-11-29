/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 11:14:04 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 13:16:41 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Ajoute l’élément new en tête de la liste.
** Param. #1 L’adresse d’un pointeur sur le premier maillon d’une liste.
** Param. #2 Le maillon à ajouter en tête de cette liste.
** Retour rien
*/
/*
void	ft_lstadd(t_list **alst, t_list *new)
{
		if (*alst)
		{
			new = ft_lstnew(new->content, new->content_size);
			new->next = *alst;
			*alst = new;
		}
		else
			*alst = ft_lstnew(new->content, new->content_size);
}
*/

void	ft_lstadd(t_list **alst, t_list *new)
{

	if (*alst)
	{
		new->next = *alst;
		*alst = new;
	}
	else
		*alst = new;

}
