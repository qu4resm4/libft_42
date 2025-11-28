/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:38:00 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/28 16:47:12 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	// está errado pra caramba
	if (!lst || !new)
		return ;
	while ((*lst)->next)
	{
		lst = &(*lst)->next;
		if (!((*lst)->next))
			(*lst)->next = new;
	}
}
