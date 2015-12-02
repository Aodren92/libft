/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:40:41 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 19:59:57 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *elem;

	elem = *alst;
	if (elem)
	{
		elem = (t_list *)malloc(sizeof(t_list));
		del(elem->content, elem->content_size);
		free(elem);
		*alst = NULL;
	}
}
