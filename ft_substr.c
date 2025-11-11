/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:29:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/11 18:30:10 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s + start);
	if (len_s < len)
		sub_str = (char *) malloc(len_s + 1);
	else
		sub_str = (char *) malloc(len + 1);
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	return (sub_str);	
}
        // calcula o len_s apartir do start
        // verificar se len_s é maior que len, se for maior ok, se for igual ok, se for menor, malloca usando o len_s pois pega até '\0'
        // malloca
        //
        // index -> para comparar com len
        // copia enquanto (s[start + i] && i < len)
        //

/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_substr("jovem", 1, 7));	
	printf("%s\n", ft_substr("jovem", 7, 7));	
	printf("%s\n", ft_substr("jovem", 0, 7));
}
*/
