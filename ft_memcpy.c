/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 19:13:41 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/14 09:11:15 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			index;

	if (src == NULL)
		return (dest);
	index = 0;
	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	while (index < n)
	{
		c_dest[index] = c_src[index];
		index++;
	}
	return (dest);
}
