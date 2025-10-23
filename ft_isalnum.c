/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 21:49:56 by gquaresm          #+#    #+#             */
/*   Updated: 2025/10/22 21:55:28 by gquaresm         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if (c < 0)
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
