/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:10:45 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/10 14:17:42 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	len_str;
	size_t	index;

	len_str = ft_strlen(s);
	dup_str = (char *) malloc((len_str + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	index = 0;
	while (index < len_str)
	{
		dup_str[index] = s[index];
		index++;
	}
	dup_str[index] = '\0';
	return (dup_str);
}
