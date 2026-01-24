/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:37:23 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/20 17:58:51 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"
#include <stdio.h>

void	fill_linked_list(int nb, t_node **stack_a)
{
	t_node	*node;

	node = ft_lstnew(nb);
	ft_lstadd_back(stack_a, node);
}

t_node	*node_slct(t_node **stack, int limiter)
{
	int		i;
	t_node	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp && i < limiter)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

int	node_counter(t_node **stack)
{
	int	counter;
	t_node	*tmp;

	tmp = *stack;
	counter = 0;
	while (tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}
