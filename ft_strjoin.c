/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:05:56 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/14 16:06:37 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!str)
		return (NULL);
	str[len_s1 + len_s2] = '\0';
	while (len_s2 > 0)
	{
		str[len_s1 + len_s2 - 1] = s2[len_s2 - 1];
		len_s2--;
	}
	while (len_s1 > 0)
	{
		str[len_s1 - 1] = s1[len_s1 - 1];
		len_s1--;
	}
	return (str);
}
