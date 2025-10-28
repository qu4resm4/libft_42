/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:16 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/28 20:38:03 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len_src;
	size_t	index;

	len_src = 0;
	while (src[len_src])
		len_src++;
	index = 0;
	while (index < size)
	{
		dst[index] = src[index];
		index++;
	}
	if (len_src < index)
	return (len_src);
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

