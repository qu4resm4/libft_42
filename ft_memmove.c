/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 07:42:23 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/28 16:27:39 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;

	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	if (dest > src)
	{
		while (0 < n)
		{
			c_dest[n - 1] = c_src[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char	string_teste[11] = " oi oi oi ";

	ft_memmove(string_teste, string_teste + 2, 4);

	printf("%s", string_teste);
}*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char buffer[9] = "abcdefgh";
    char buffer2[9] = "abcdefgh";

    ft_memmove(buffer + 4, buffer + 2, 5);
    printf("Buffer after memmove: %p\n", (buffer + 9));
    memmove(buffer2 + 4, buffer2 + 2, 5);
    printf("Buffer2 after memmove: %p\n", (buffer2 + 18));

    return 0;
}
*/
