/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:21:13 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/10 22:03:36 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


static char	*ft_itoa_to_int_min(void)
{
	char	*int_min;

	int_min = (char *) malloc(sizeof(char) * 12);
	int_min[0] = '-';
	int_min[1] = '2';
	int_min[2] = '1';
	int_min[3] = '4';
	int_min[4] = '7';
	int_min[5] = '4';
	int_min[6] = '8';
	int_min[7] = '3';
	int_min[8] = '6';
	int_min[9] = '4';
	int_min[10] = '8';
	int_min[11] = '\0';
	return (int_min);
}

char	*ft_alloc_and_fill(short decimal_places, int integer, int signal)
{
	char	*num;

	num = (char *) malloc(sizeof(char) * (decimal_places + 1));
	num[decimal_places] = '\0';
	if (signal == -1)
	{
		num[0] = '-';
	}
	while (integer / 10 != 0)
	{
		num[decimal_places - 1] = '0' + (integer % 10);
		integer = integer / 10;
		decimal_places--;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		signal;
	long		integer;
	short	decimal_places;

	signal = 1;
	integer = n;
	decimal_places = 0;
	if (n < 0)
	{
		signal = -1;
		integer = -n;
		decimal_places++;
	}
	while (integer / 10 != 0)
	{
		integer = integer / 10;
		decimal_places++;
	}
	decimal_places++;
	integer = n * signal;
	num = ft_alloc_and_fill(decimal_places, integer, signal);
	return (num);
}

#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(-20));
	printf("%s\n", ft_itoa(90));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-180));
}

