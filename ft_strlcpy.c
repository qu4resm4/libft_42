/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:16 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/02 19:11:41 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	index;

	index = 0;
        len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (size == 0)
		return (len_src);
	if (len_dst < (size - 1))
		size = len_dst - 1;
	ft_memcpy(dst, src, size);
	return (len_src);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);
	ft_strlcpy(dest, src, -1);
	printf("%s", dest);
}
*/

/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char	original_dst[11] = "12345";
	char	original_src[] = "jovem";
	char	my_dst[11] = "12345";
	char	my_src[] = "jovem";

	ft_strlcpy(my_dst, my_src, 5);
	strlcpy(original_dst, original_src, 5);	

	printf("%s\n", original_dst);
	printf("%s\n", my_dst);
}
*/
