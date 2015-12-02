/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 10:26:55 by abary             #+#    #+#             */
/*   Updated: 2015/12/02 14:19:30 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define DST "                 "
#define STR "une "
#define LEN 45
#define C 'e'
#define RANDT	512
#define LONG	10000
#define D_ERROR	{ printf("Error Line %d, Funct %s ", __LINE__ - 1, __func__); return (0); }

t_list		*uf_testmap(t_list *elem)
{
	t_list	*new;
	char	*content;
	int		i;

	content = ft_strdup((char *)(elem->content));
	i = 0;
	while (i < ft_strlen(content))
	{
		content[i] += 1;
		++i;
	}
	new = ft_lstnew((void const *) content, 5);
	free(content);
	return (new);
}
int		main()
{
    t_list			*lst_initial;
    t_list			*lst;
    char			*content;
    t_list			*(*f)(t_list *);

	content = "toto";
	lst_initial = ft_lstnew((void const *) content, 5);
	content = "tata";
	lst_initial->next = ft_lstnew((void const *) content, 5);
	content = "tutu";
	lst_initial->next->next = ft_lstnew((void const *) content, 5);
	f = &uf_testmap;
	lst = ft_lstmap(lst_initial, f);
	if (!strcmp((const char *) lst->content, (const char *) lst_initial->content) || strcmp((const char *) lst->content, "upup"))
        D_ERROR;
		printf("%s\n", (char *)lst->content);
		printf("%s\n", (char *)lst_initial->content);
    if (!strcmp((const char *) lst->next->content, (const char *) lst_initial->next->content) || strcmp((const char *) lst->next->content, "ubub"))
	{
		printf("%s\n", (char *)lst->next->content);
		printf("%s\n", (char *)lst_initial->next->content);
        D_ERROR;
	}
    if (!strcmp((const char *) lst->next->next->content, (const char *) lst_initial->next->next->content) || strcmp((const char *) lst->next->next->content, "uvuv"))
        D_ERROR;
	return (0);
}
