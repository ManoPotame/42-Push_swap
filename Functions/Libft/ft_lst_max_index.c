/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_max_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:37:19 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/24 03:05:52 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

int	max_index(t_node **stack)
{
	t_node	*tmp;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp)
	{
		if (index < tmp->index)
			index = tmp->index;
		tmp = tmp->next;
	}
	return (index);
}
int	pos_index(t_node **stack, int max_index)
{
	t_node	*tmp;
	int		index;

	tmp = *stack;
	index = 0;
	while (tmp)
	{
		if (tmp->index == max_index)
			return (index);
		index++;
		tmp = tmp->next;
	}
	return (0);
}
