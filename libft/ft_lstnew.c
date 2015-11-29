/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:05:15 by abary             #+#    #+#             */
/*   Updated: 2015/11/28 14:30:39 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Alloue (avec malloc(3)) et retourne un maillon “frais”.
** Les champs content et content_size du nouveau maillon
** sont initialisés par copie des paramètres de la fonction.
** Si le pa- ramètre content est nul,
** le champs content est initialisé à NULL et
** le champs content_size est initialisé à 0
** quelque soit la valeur du paramètre content_size.
** Le champ next est initialisé à NULL.
** Si l’allocation échoue, la fonction renvoie NULL.
** Param. #1 Le contenu à ajouter au nouveau maillon.
** Param. #2 La taille du contenu à ajouter au nouveau maillon.
** Retour Le nouveau maillon.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (0);
	if (content)
	{
		new->content = malloc(content_size);
		if (!new->content)
			return (0);
		new->content = (void *)content;
		new->content_size = content_size;
	}
	else
	{
		new->content = 0;
		new->content_size = 0;
	}
	new->next = 0;
	return (new);
}
