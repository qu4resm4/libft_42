/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:11:08 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/22 21:16:41 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
// lembrar de tirar o importe ira acausar erro de duplo importe
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	const_byte;	
	unsigned int	index;
	char			*cast_ptr;

	cast_ptr = (char *) s;
	const_byte = c;
	index = 0;
	while (index != n)
	{
		cast_ptr[index] = const_byte;
		index++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main () 
{
   char str[50];

   strcpy(str, "Welcome to Tutorialspoint");
   puts(str);

   memset(str, '#', 7);
   puts(str);
   
   return(0);
}
*/
