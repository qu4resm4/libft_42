/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 09:26:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/06 18:53:31 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*find_p;
	size_t	idx_big;
	size_t	idx_lit;
	int	find;

	if (!(*little))
		return ((char *) big);
	find_p = NULL;
	idx_big = 0;
	find = 0;
	while (big[idx_big])
	{
		if (find)
			break ;
		find_p = (char *) big + idx_big;
		idx_lit = 0;
		while ((big[idx_big] == little[0]) && idx_lit < len)
		{
			if (big[idx_big + idx_lit] != little[idx_lit])
			{
				find_p = NULL;
				break;
			}
			if (big[idx_big + idx_lit] == '\0' && little[idx_lit] == '\0')
			{
				find = 1;
				break ;
			}
			idx_lit++;
		}
		idx_big++;
	}
	return (find_p);
}

#include <stdio.h>
int     main(void)
{
        char haystack[30] = "aaabcabcd";
        char needle[10] = "aabc";
        
        /* 2 */ printf("%s\n", ft_strnstr(haystack, needle, -1)); // == haystack + 1);

        /* 3 */ printf("%s\n", ft_strnstr(haystack, "a", -1)); //== haystack); 

        /* 4 */ printf("%s\n", ft_strnstr(haystack, "c", -1)); //== haystack + 4); 

        /* 8 */ printf("%s\n", ft_strnstr(haystack, "aaabc", 5)); // == haystack); 

        /* 11 */
        printf("%s\n", ft_strnstr(haystack, "cd", 8)); // == NULL; 

        /* 12 mbueno-g */
        printf("%s\n", ft_strnstr(haystack, "a", 1)); // == haystack;
        return (0);
}

// se little estiver vazia retorna big

// se não encontrar retorna um null pointer

// compara até len ou até o primeiro \0 de little, compara o \0

/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;
	
	ptr = strnstr(largestring, smallstring, 4);
	printf("%p", ptr);
	printf("%p", largestring);
}
*/
