/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:21:28 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/24 14:04:45 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	unsigned char	ascii_char;

	if (c < 0)
		return (0);
	ascii_char = (unsigned char) c;
	if (ascii_char >= 0 && ascii_char <= 127)
		return (1);
	return (0);
}
