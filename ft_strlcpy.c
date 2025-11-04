/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:11:16 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/04 13:19:46 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// If the size is set to 1,
// it doesn't copy and instead fills with the null character.
// Copy while respecting the size,
// and copy while the index is less than the length
// (ensures that the last space will be a null character).
// and while the current index of the source contains a non-null character
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	idx;

	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	idx = 0;
	while (idx < (size - 1) && idx < src_len && src[idx])
	{
		dst[idx] = src[idx];
		idx++;
	}
	dst[idx] = '\0';
	return (src_len);
}
