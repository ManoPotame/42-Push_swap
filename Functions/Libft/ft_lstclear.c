/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:45:28 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/30 15:05:19 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

void	ft_lstclear(t_node **lst)
{
	t_node	*nodeforward;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		nodeforward = (*lst)->next;
		free(*lst);
		*lst = nodeforward;
	}
	*lst = NULL;
}
