/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 20:43:22 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/04 21:18:51 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	if (n == 0)
		return (0);
	while (idx < n)
	{
		if (((unsigned char *) s1)[idx] != ((unsigned char *) s2)[idx])
			return (((unsigned char *) s1)[idx] - ((unsigned char *) s2)[idx]);
		idx++;
	}
	return (0);
}
