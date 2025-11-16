/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:43:37 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/16 10:59:03 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strtrim_chr(char const *s1, char c)
{
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	return (ft_strtrim(s1, c));
}

static void	ft_count_words(char const *s, char c, unsigned int *count)
{
	short	last_is_c;

	*count = 0;
	last_is_c = 1;
	while (*s)
	{
		if (last_is_c && (*s != c))
		{
			(*count)++;
			last_is_c = 0;
		}
		if (*s == c)
			last_is_c = 1;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{	
	char	**str_arr;
	unsigned int	count;

	s = ft_strtrim_chr(s, c);
	ft_count_words(s, c, &count);
	str_arr = (char **) malloc(sizeof(char *) * (count + 1));
	if (str_arr)
		return (NULL);
	str_arr[count] = NULL;
	// alocar espaço para as palavras
	// preencher as palavras
	while ()
	{
		// iterar sobre count (qunatidade de palavras
		// chamar função de alocar palavra (index palavra), se falhar retorna null
		// se retorno null chama função de free iterativa (array com null no fina)
	}		
	free(s); // antes de retornar
	return (str_arr);
}
// contar a quantidade de palavras para alocar ponteiros

// iterar para contar letras palavras e allocar palaavras

// preencher ponteiros e palavras e etc

int	main(void)
{
	char	*str = "--1-2--3---4----5-----42";
	char	**str_arr;

	str_arr = ft_split(str, '-');
	printf("%s", str_arr[0]);
}
