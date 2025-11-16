/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 16:10:25 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 22:58:10 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1))
	{
		if (!*s1)
			break ;
		s1++;
	}
	len = ft_strlen(s1);
	if (len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, *(s1 + len - 1)))
		len--;
	str = ft_substr(s1, 0, len);
	if (!str)
		return (NULL);
	return (str);
}
