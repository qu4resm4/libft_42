/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:29:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 09:59:38 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	len_s;
	
	if (!s)
		return (NULL);
/**/
// definir len correto para malocar e para copiar
// caso start > ft_strlen(s) -> retornar "" free ft_strdup("")
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	else if (len_s < len)
		len = len_s;
	sub_str = (char *) malloc(len + 1);
	if (!sub_str)
		return (NULL);
	ft_strlcpy(sub_str, s + start, len + 1);
	return (sub_str);
}
        // calcula o len_s apartir do start
        // verificar se len_s é maior que len, se for maior ok, se for igual ok, se for menor, malloca usando o len_s pois pega até '\0'
        // malloca
        //
        // index -> para comparar com len
        // copia enquanto (s[start + i] && i < len)
        //

#include <stdio.h>

int	main(void)
{
	str = strdup("0123456789");
        s = ft_substr(str, 9, 10);
       	printf("true 9 -> %i\n", !strcmp(s, "9")); // 9 -> "9"
       	printf("%c", s[0]); // 10
       	printf("%c", s[1]); // 10	
	
	// pritf("%s\n", ft_substr("jovem", 1, 7));	
	// printf("%s\n", ft_substr("jovem", 7, 7));	
	// printf("%s\n", ft_substr("jovem", 0, 7));
}
