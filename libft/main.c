/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:18:46 by abary             #+#    #+#             */
/*   Updated: 2015/11/29 14:06:16 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#define TEST "-2147483648"
#define TEST2 ""

int		main()
{
	printf("%d\n", ft_strequ("", ""));

	/*
	mt_assert(list->content_size == 21);
	mt_assert(list->next->content_size == 100);
	mt_assert(!!map && map->content_size == 42);
	mt_assert(!!map && map->next->content_size == 200);
	*/

	//mt_assert(list == list2);
	//mt_assert(list->next != NULL);
	/*
	   void *a;	int c;
	   void *b;
	   size_t len;
	   b = malloc(sizeof(unsigned char *) * 42);
	   a = memset(b, 42, 42);

	   char dst[100] = "un truc";
	   void *src = "un truc";
	   void *result;
	   c = 'K';
	   c = ft_memcmp(dst, src, 5);
	   printf("%s\n", dst);
	   printf("%d\n", c);
	   ft_putstr("aallh oui");
	   printf("%zu\n", sizeof(void));
	//printf("%s\n", a);
	*/
	/*	int c;
		unsigned char *z;
		void *a;
		void *b;
		b = malloc(sizeof(unsigned char *) * 42);
		a = memset(b, 42, 42);
		z = (unsigned char *)a;
		c = 42;
		*/
	/*	while(c > 0)
		{
		printf("%0x\n", *z);
		z++;
		c--;
		}
		ft_strclr((char *)z);

		c = 42;

		while(c > 0)
		{
		printf("%0x\n", *z);
		z
		c--;
		}
		*/
	/*
	   ft_bzero(b, 45);
	//printf("%s\n", b);
	c = 450 ;
	z = (unsigned char *)a;
	*/
	/*void *dst;
	  void *result;
	  dst = malloc(sizeof(unsigned char *) * 42);

	  printf("%s\n", a);
	  result = ft_memcpy(dst, a, 49);
	  printf("%s\n", result);	while (c > 0)
	  {
	  printf("%0x", *z);
	  z++;
	  c--;
	  }*/
	/*	t_list *elem;
		void *content = "hel";
		elem = ft_lstnew(content, 4);
		printf("%zu\n", elem->content_size);
		printf("%s\n", elem->content);*/
	/*	char *s1 ="test";
		char *s2 = "test";
		printf("%d\n", ft_strcmp(s1, s2));
		printf("%s\n", s2);*/
	return (0);
}
