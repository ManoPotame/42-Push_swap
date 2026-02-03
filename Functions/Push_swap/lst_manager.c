/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_manager.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:37:23 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/03 17:56:35 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

/**
 * @brief Function which fill the stack_a with all gived arguments.
 *
 * @param nb The gived number.
 * @param stack_a The given linked list.
 */
void	fill_linked_list(int nb, t_node **stack_a)
{
	t_node	*node;

	node = ft_lstnew(nb);
	if (!node)
		ft_lstclear(stack_a);
	ft_lstadd_back(stack_a, node);
}

/**
 * @brief Function which run through a linked list until the index
 * reach the limiter.
 *
 * @param stack The given linked list.
 * @param limiter The node number where we have to stop.
 * @return t_node*: The node in linked list that we choosed.
 */
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

/**
 * @brief Function node_counter will count all node contained in a linked list.
 *
 * @param stack The given linked list.
 * @return int: The number of node in linked list.
 */
int	node_counter(t_node **stack)
{
	int		counter;
	t_node	*tmp;

	if (stack == NULL || *stack == NULL)
		return (0);
	tmp = *stack;
	counter = 0;
	while (tmp)
	{
		tmp = tmp->next;
		counter++;
	}
	return (counter);
}

/**
 * @brief Function which check if the list given as argument
 * is sorted by default.
 *
 * @param stack The given linked list.
 * @return int: 0 if the list isnt sorted, else 1.
 */
int	node_sorted(t_node **stack)
{
	t_node	*tmp;
	int		node_index;
	int		node_next_index;

	tmp = *stack;
	while (tmp->next)
	{
		node_index = tmp->index;
		node_next_index = tmp->next->index;
		if (node_index + 1 != node_next_index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
