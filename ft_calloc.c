/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:53:27 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/10 14:08:50 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*pointer;

	if (nelem != 0 && elsize != 0)
		if ((nelem * elsize) / nelem != elsize)
			return (NULL);
	pointer = malloc(nelem * elsize);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, nelem * elsize);
	return (pointer);
}
