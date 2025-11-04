/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 07:42:23 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/03 08:39:39 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;

	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	if (dest >= src)
	{
		while (0 < n)
		{
			c_dest[n - 1] = c_src[n - 1];
			n--;
		}
	}
	else
		c_dest = (unsigned char *) ft_memcpy(dest, src, n);
	return (dest);
}

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}
	*/
