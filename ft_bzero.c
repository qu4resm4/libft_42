/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:54:28 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/28 16:51:28 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pointer;
	size_t	index;

	pointer = (char *) s;
	index = 0;
	while (index < n)
	{
		pointer[index] = '\0';
		index++;
	}
}

/*teste
#include <stdio.h>
int	main(void)
{
	char	str[10] = "jovem12345";
	int	count = 0;	

	printf("%s\n", str);
	ft_bzero(4, str);
	
	while (count < 9)
	{
		printf("%c", str[count]);
		count++;
	}
}
*/
