/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquaresm <gquaresm@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:31:18 by gquaresm          #+#    #+#             */
/*   Updated: 2025/11/28 16:47:28 by gquaresm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	// tem algo de errado auqi
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst->next))
			return (lst);
	}
	return (lst);
}
