/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:26:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/08 16:24:58 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
	If len_little is less than @param{len}, find it first and compare until
the null character is reached, then terminate.

	If len_little is greater than len, compare until @param{len}.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	idx_big;
	size_t	idx_lit;
	size_t	len_lit;

	if (!(*little))
		return ((char *) big);
	len_lit = ft_strlen(little);
	idx_big = 0;
	while (big[idx_big] && (idx_big + len_lit <= len))
	{
		idx_lit = 0;
		while ((big[idx_big] == little[0])
			&& big[idx_big + idx_lit] && little[idx_lit])
		{
			if (big[idx_big + idx_lit] != little[idx_lit])
				break ;
			else if (idx_lit == (len_lit - 1))
				return (((char *) big) + idx_big);
			idx_lit++;
		}
		idx_big++;
	}
	return (NULL);
}
