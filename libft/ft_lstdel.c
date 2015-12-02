/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 10:51:23 by abary             #+#    #+#             */
/*   Updated: 2015/12/01 20:00:29 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *elem;
	t_list *tmp;

	elem = *alst;
	while (elem)
	{
		tmp = elem;
		elem = elem->next;
		if (tmp)
			ft_lstdelone(&tmp, del);
	}
	*alst = NULL;
}
