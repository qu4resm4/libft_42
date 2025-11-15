/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:53:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 18:04:10 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str_result;
	size_t	len;

	len = ft_strlen(s);
	str_result = (char *) malloc(len + 1);
	if (!str_result)
		return (NULL);
	str_result[len] = '\0';
	while (len > 0)
	{
		str_result[len - 1] = f(len - 1, s[len - 1]);
		len--;
	}
	return (str_result);
}
