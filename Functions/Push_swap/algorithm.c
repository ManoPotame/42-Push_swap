/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:44:45 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/03 13:48:47 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

/**
 * @brief Function which push all element from stack_a to stack_b.
 * Depending on the position of index use "rb" "rrb" to push the next node
 * correctly.
 *
 * @param stack_a The entier linked list A.
 * @param stack_b The entier linked list B.
 */
static void	reintegration_sort(t_node **stack_a, t_node **stack_b)
{
	int	index_max;
	int	position;

	while (*stack_b)
	{
		index_max = max_index(stack_b);
		position = pos_index(stack_b, index_max);
		if (position <= (node_counter(stack_b) / 2))
		{
			while ((*stack_b)->index != index_max)
				rotate_stack(stack_b, 'b');
		}
		else
		{
			while ((*stack_b)->index != index_max)
				reverse_rotate_stack(stack_b, 'b');
		}
		push_stack(stack_b, stack_a, 'a');
	}
}

/**
 * @brief Sorting function which push all element from stack_a to stack_b
 * depending on the node index of stack_a, the threshold and delta.
 *
 * @param stack_a The entier linked list A.
 * @param stack_b The entier linked list B.
 */
void	butterfly_sort(t_node **stack_a, t_node **stack_b)
{
	int	threshold;
	int	delta;

	threshold = 0;
	delta = (node_counter(stack_a) / 20) + 7;
	while (*stack_a)
	{
		if ((*stack_a)->index <= threshold + delta)
		{
			push_stack(stack_a, stack_b, 'b');
			if ((*stack_b)->index <= threshold)
				rotate_stack(stack_b, 'b');
			threshold++;
		}
		else
			rotate_stack(stack_a, 'a');
	}
	reintegration_sort(stack_a, stack_b);
}
