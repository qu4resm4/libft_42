/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:10:25 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 17:31:28 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	count_end;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1))
	{
		if (!*s1)
			break ;
		s1++;
	}
	len = ft_strlen(s1);
	count_end = 0;
	if (len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, *(s1 + len - 1)))
	{
		count_end++;
		len--;
	}
	str = ft_substr(s1, 0, len);
	if (!str)
		return (NULL);
	return (str);
}
