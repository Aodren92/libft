/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 12:18:46 by abary             #+#    #+#             */
/*   Updated: 2015/11/25 21:50:33 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <stdlib.h>
#include <ctype.h>
#include <strings.h>
#define TEST "-2147483648"
#define TEST2 ""
int		main()
{
	/*
	void *a;
	int c;
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
		z++;
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
	printf("%s\n", result);
	while (c > 0)
	{
		printf("%0x", *z);
		z++;
		c--;
	}*/

	char src[100] = "un truc dans le genre yes baie";
	//char *dest = "je suis trop   aodren  kikikikikikikiki fort  ";
	char *dest =  "je suis trop fort wqfwew";
	char *result;

	result = ft_itoa(-123);
	printf("%s\n", result);

	return (0);
}
