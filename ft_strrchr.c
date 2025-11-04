/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:44:32 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/04 18:18:27 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p_char;
	int			idx;

	p_char = NULL;
	idx = 0;
	while (s[idx])
	{
		if (s[idx] == (unsigned char) c)
			p_char = s + idx;
		idx++;
	}
	if ((unsigned char) c == '\0')
		p_char = (char *) s + idx;
	return ((char *) p_char);
}
