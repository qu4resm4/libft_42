/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:37:06 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/23 11:42:44 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char	ascii_char;

	if (c < 0)
		return (0);
	ascii_char = (unsigned char) c;
	if (ascii_char > 31 && ascii_char < 127)
		return (1);
	return (0);
}
