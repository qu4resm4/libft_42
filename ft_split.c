/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:43:37 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/16 17:46:48 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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

static char	*ft_alloc_and_cpy_str(char const *s, char c, unsigned int index)
{
	char	*str;
	unsigned int	count_letters;
	unsigned int	index_word;
	short	last_is_c;

	last_is_c = 1;
	count_letters = 0;
	index_word = 0;
	while (*s && index_word != index)
	{
		if (last_is_c && (*s != c))
		{
			index_word++;
			last_is_c = 0;
			while (index_word == index
				&& s[count_letters] != c && s[count_letters])
				count_letters++;
		}
		if (*s == c)
			last_is_c = 1;
		s++;
	}
	str = (char *) malloc (count_letters + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s - 1, count_letters + 1);
	return (str);
}
// 24 linhas

static void	ft_free_str_arr(char	**str_arr)
{
	while (*str_arr)
	{
		free(*str_arr);
		(*str_arr)++;
	}
	free(str_arr);
}

char	**ft_split(char const *s, char c)
{
	char			**str_arr;
	unsigned int	count;

	ft_count_words(s, c, &count);
	str_arr = (char **) malloc(sizeof(char *) * (count + 1));
	if (!str_arr)
		return (NULL);
	str_arr[count] = NULL;
	while (count)
	{
		str_arr[count - 1] = ft_alloc_and_cpy_str(s, c, count);
		if (!str_arr[count - 1])
		{
			ft_free_str_arr(str_arr);
			return (NULL);
		}
		count--;
	}
	return (str_arr);
}
