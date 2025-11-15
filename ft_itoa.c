/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:21:13 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 16:08:08 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_places(long n)
{
	int	places;

	places = 1;
	if (n < 0)
	{
		n = -n;
		places++;
	}
	while (n > 9)
	{
		n /= 10;
		places++;
	}
	return (places);
}

char	*ft_itoa(int n)
{
	char	*str_num;
	long	num;
	int		places;

	places = ft_count_places(n);
	str_num = (char *) malloc(sizeof(char) * (places + 1));
	str_num[places] = '\0';
	num = n;
	if (n < 0)
		num = -num;
	while (places > 0)
	{
		str_num[places - 1] = '0' + (num % 10);
		num = num / 10;
		places--;
	}
	if (n < 0)
		str_num[0] = '-';
	return (str_num);
}
