/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:44:21 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/28 20:30:13 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	int	len_src;
	int	len_dst;
	size_t	index;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (dst[len_dst])
		len_dst++;
	if (src == 0 || size == 0)
		return (len_src + len_dst);
	index = 0;
	while (index < size)
	{
		dst[len_dst + index] = src[index];
		index++;
	}
	return (len_src + len_dst);
}

/**/
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char    original_dst[11] = "12345";
        char    original_src[] = "jovem";
        char    my_dst[11] = "12345";
        char    my_src[] = "jovem";
	size_t 	teste;

        teste = ft_strlcat(my_dst, my_src, 5);
        /*teste = */strlcat(original_dst, original_src, 5);
	
	printf("TESTAR %li\n", teste);
        printf("%s\n", original_dst);
        printf("%s\n", my_dst);
}

/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char    original_dst[11] = "";
        char    original_src[] = "jovem";
        char    my_dst[11] = "";
        char    my_src[] = "jovem";

        ft_strlcat(my_dst, my_src, 5);
        strlcat(original_dst, original_src, 5);

        printf("%s\n", original_dst);
        printf("%s\n", my_dst);
}
*/
/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char    original_dst[11] = "12345";
        char    original_src[] = "";
        char    my_dst[11] = "12345";
        char    my_src[] = "";

        ft_strlcat(my_dst, my_src, 5);
        strlcat(original_dst, original_src, 5);

        printf("%s\n", original_dst);
        printf("%s\n", my_dst);
}
*/
/*
#include <stdio.h>
#include <bsd/string.h>
int     main(void)
{
        char    original_dst[11] = "12345";
        char    original_src[] = "jovem";
        char    my_dst[11] = "12345";
        char    my_src[] = "jovem";

        ft_strlcat(my_dst, my_src, 0);
        strlcat(original_dst, original_src, 0);

        printf("%s\n", original_dst);
        printf("%s\n", my_dst);
}
*/
