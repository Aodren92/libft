/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:40:41 by abary             #+#    #+#             */
/*   Updated: 2015/12/02 16:28:04 by abary            ###   ########.fr       */
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
		if ((elem = (t_list *)malloc(sizeof(t_list))))
		{
			del(elem->content, elem->content_size);
			free(elem);
			*alst = NULL;
		}
	}
}
