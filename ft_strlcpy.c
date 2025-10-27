/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:16 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/27 14:55:08 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len_src;
	int	len_dst;
	int	index;

	len_src = 0;
	while (src[len_src])
		len_src++;
	len_dst = 0;
	while (dst[len_dst])
		len_dst++;
	if (*dst == '\0' || size == 0)
	{
		*dst = '\0';
		return (len_src + len_dst);
	}
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

