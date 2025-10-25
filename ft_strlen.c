/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:36:11 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/24 14:02:02 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	char *teste = "jovem";
	printf("%li", strlen(teste));	
}
*/
