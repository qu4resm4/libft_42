/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:21:13 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/15 09:49:45 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdio.h>
/*
static int	ft_count_places(int n)
{
	int places;

	places = 0;
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

char	*dft_itoa(int n)
{
	char	*str_num;
	long	num;
	int	places;

	places = ft_count_places(n);
	//if (n < 0)
	//{
//
//	}
}
*/
/*
static int      ft_count_places(int n)
{
        int places;

        places = 0;
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

char    *ft_itoa(int n)
{
        char    *str_num;
        long    num;
        int     places;

        places = ft_count_places(n);
        str_num = (char *) malloc(sizeof(char) * (places + 1));
        str_num[places] = '\0';
        num = n;
        if (n < 0)
        {
                str_num[0] = '-';
                num = -num;
        }
        while (places > 0)
        {
                str_num[places - 1] = '0' + (num % 10);
                num = num / 10;
                places--;
        }
        str_num[places - 1] = '0' + (num % 10);
        if (n < 0)
                str_num[0] = '-';
        return (str_num);
}
*/
/*
char    *ft_itoa(int n)
{
	char	*str_num;
	long	num;
	int	places;

	// contar casas decimais
	// armazenar conversão do inteiro para positivo (modulo)		
	places = 0;
	num = n;
	if (n > 0)
	{
		num = -num;
		places++;
	}
	
}

// usar long para evitar int overflow
// verificar se é negativo e preencher index 0 com 
// 

int     main(void)
{
        printf("%s\n", ft_itoa(2147483647));
        printf("%s\n", ft_itoa(-2147483648));
        printf("%s\n", ft_itoa(0));
        printf("%s\n", ft_itoa(-180));
}
*/
