/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:25:29 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/22 21:47:40 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	unsigned char	ascii_char;

	if (c < 0)
		return (0);
	ascii_char = (unsigned char) c;
	if (ascii_char >= '0' && ascii_char <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
int     main()
{
		printf("%i", ft_isdigit('a'));
		printf("%i", ft_isdigit('='));
		printf("%i", ft_isdigit('0'));
		printf("%i", ft_isdigit('7'));
		printf("%i", ft_isdigit('Z'));
}
*/
