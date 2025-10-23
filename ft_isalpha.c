/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:46:05 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/22 20:36:01 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	unsigned char	ascii_char;

	if (c < 0)
		return (0);
	ascii_char = (unsigned char) c;
	if (ascii_char >= 'a' && ascii_char <= 'z')
		return (1);
	if (ascii_char >= 'A' && ascii_char <= 'Z')
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("%i", ft_isalpha('a'));
	printf("%i", ft_isalpha('='));
	printf("%i", ft_isalpha('0'));
	printf("%i", ft_isalpha('7'));
	printf("%i", ft_isalpha('Z'));
}
*/
