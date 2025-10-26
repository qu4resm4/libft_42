/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:13:41 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/26 18:28:53 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	int				index;

	index = 0;
	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	while (c_src[index] && index < n)
	{
		c_dest[index] = c_src[index];
		index++;
	}
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	string_teste[11] = " oi oi oi ";
	char	string_src_teste[7] = "jovem";

	ft_memcpy(string_teste, string_src_teste, 7);

	printf("%s", string_teste);
}
*/
