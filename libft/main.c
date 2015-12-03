/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abary <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 19:49:54 by abary             #+#    #+#             */
/*   Updated: 2015/12/03 19:54:26 by abary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	main()
{

	char dst[20] = "abcdefgh";
	char dst2[20] = "abcdefgh";

	ft_memmove(dst + 4, dst, 10);
	memmove(dst + 4, dst, 10);
	printf("%s\n", dst);
	printf("%s\n", dst2);

}
