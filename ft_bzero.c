/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:54:28 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 23:01:00 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pointer;
	size_t	index;

	pointer = (char *) s;
	index = 0;
	while (index < n)
	{
		pointer[index] = '\0';
		index++;
	}
}
