/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:44:21 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/02 18:27:42 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index;
	size_t len_src;
        size_t len_dst;
	size_t sum;

	index = 0;
	sum = 0;
        len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size > len_dst)
		sum = len_src + len_dst;
	else
		return (len_src + size);
	while (src[index] && (len_dst + 1) < size)
		dst[len_dst++] = src[index++];
	dst[len_dst] = '\0';
	return (sum);
}
// #include <bsd/string.h>
// #include <stdio.h>
// int main(void)
// {
//         char dest[30];
//         memset(dest, 0, 30);
//         char *src = (char *)"AAAAAAAAA";
//         dest[0] = 'B';
//         printf("%ld\n", ft_strlcat(dest, src, 1));
//         printf("%s", dest);
// }

// #include <stdio.h>
// #include <bsd/string.h>
// int     main(void)
// {
//         char    original_dst[11] = "12345";
//         char    original_src[] = "jovem";
//         char    my_dst[11] = "12345";
//         char    my_src[] = "jovem";
// 	size_t 	teste;

//         teste = ft_strlcat(my_dst, my_src, 5);
//         /*teste = */strlcat(original_dst, original_src, 5);

// 	printf("TESTAR %li\n", teste);
//         printf("%s\n", original_dst);
//         printf("%s\n", my_dst);
// }

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
