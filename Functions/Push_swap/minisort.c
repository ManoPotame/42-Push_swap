/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minisort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:00:09 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/03 18:09:56 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

/**
 * @brief Function which sort the linked list with an algorithm created
 * to deal with 2 numbers.
 *
 * @param stack_a The entier linked list A.
 */
void	two_node_sort(t_node **stack_a)
{
	swap_stack(stack_a, 'a');
}

/**
 * @brief Function which sort the linked list with an algorithm created
 * to deal with 3 numbers.
 *
 * @param stack_a The entier linked list A.
 */
void	three_node_sort(t_node **stack_a)
{
	if (node_sorted(stack_a))
		return ;
	if ((*stack_a)->index == 0)
	{
		reverse_rotate_stack(stack_a, 'a');
		swap_stack(stack_a, 'a');
	}
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 0)
		swap_stack(stack_a, 'a');
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index == 2)
		reverse_rotate_stack(stack_a, 'a');
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 0)
		rotate_stack(stack_a, 'a');
	else if ((*stack_a)->index == 2 && (*stack_a)->next->index == 1)
	{
		swap_stack(stack_a, 'a');
		reverse_rotate_stack(stack_a, 'a');
	}
}

/**
 * @brief Function which sort the linked list with an algorithm created
 * to deal with 5 numbers.
 *
 * @param stack_a The entier linked list A.
 * @param stack_b The entier linked list B.
 */
void	five_node_sort(t_node **stack_a, t_node **stack_b)
{
	while (node_counter(stack_a) != 3)
	{
		if ((*stack_a)->index == 3 || (*stack_a)->index == 4)
		{
			push_stack(stack_a, stack_b, 'b');
			continue ;
		}
		rotate_stack(stack_a, 'a');
	}
	three_node_sort(stack_a);
	if (!node_sorted(stack_b))
		swap_stack(stack_b, 'b');
	while (*stack_b)
	{
		push_stack(stack_b, stack_a, 'a');
		rotate_stack(stack_a, 'a');
	}
}

/**
 * @brief Function which choose the better sorting algorithm in relation to
 * the number of node the program have to sort.
 *
 * @param stack_a The entier linked list A.
 * @param stack_b The entier linked list B.
 * @param nb_node Number of node contain in a the stack B.
 */
void	choose_sort(t_node **stack_a, t_node **stack_b, int nb_node)
{
	if (nb_node == 1)
		two_node_sort(stack_a);
	else if (nb_node == 2)
		three_node_sort(stack_a);
	else
		five_node_sort(stack_a, stack_b);
}
