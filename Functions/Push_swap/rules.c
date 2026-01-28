/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 10:16:39 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/28 15:53:09 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

/**
 * @brief Put the top node of the first stack to the top of the second stack.
 *
 * @param stack_rmv
 * @param stack_add
 * @param stack_id
 */
void	push_stack(t_node **stack_rmv, t_node **stack_add, char stack_id)
{
	t_node	*push_node;
	t_node	*stack_rmv_scnd;

	if (*stack_rmv)
		push_node = node_slct(stack_rmv, 0);
	else
		return ;
	if ((*stack_rmv)->next)
		stack_rmv_scnd = node_slct(stack_rmv, 1);
	else
		stack_rmv_scnd = NULL;
	if (*stack_add)
		push_node->next = *stack_add;
	else
		push_node->next = NULL;
	*stack_add = push_node;
	if (stack_rmv_scnd)
		*stack_rmv = stack_rmv_scnd;
	else
		*stack_rmv = NULL;
	ft_putchar_fd(1, 'p');
	ft_putchar_fd(1, stack_id);
	ft_putchar_fd(1, '\n');
}

/**
 * @brief Swap the top two element of the sended stack.
 *
 * @param stack The stack that is sent.
 * @param stack_id The name of the stack that will be displayed (a or b).
 */
void	swap_stack(t_node **stack, char stack_id)
{
	t_node	*first_node;
	t_node	*second_node;

	if (!*stack || !(*stack)->next)
		return ;
	first_node = node_slct(stack, 0);
	second_node = node_slct(stack, 1);
	swap_int(&first_node->nb, &second_node->nb);
	swap_int(&first_node->index, &second_node->index);
	if (stack_id != 's')
	{
		ft_putchar_fd(1, 's');
		ft_putchar_fd(1, stack_id);
		ft_putchar_fd(1, '\n');
	}
}

/**
 * @brief Shift all elements of the sended stack up by one (top becomes bottom).
 *
 * @param stack The stack that is sent.
 * @param stack_id The name of the stack that will be displayed (a or b).
 */
void	rotate_stack(t_node **stack, char stack_id)
{
	t_node	*top_node;
	t_node	*second_node;
	t_node	*end_node;

	if (!*stack || !(*stack)->next)
		return ;
	top_node = node_slct(stack, 0);
	second_node = node_slct(stack, 1);
	if (node_counter(stack) == 2)
		swap_stack(stack, 's');
	else
	{
		end_node = node_slct(stack, node_counter(stack) - 1);
		end_node->next = top_node;
		top_node->next = NULL;
		*stack = second_node;
	}
	ft_putchar_fd(1, 'r');
	ft_putchar_fd(1, stack_id);
	ft_putchar_fd(1, '\n');
}

/**
 * @brief Shift all elements of the sended stack down by one
 * (bottom becomes top).
 *
 * @param stack The stack that is sent.
 * @param stack_id The name of the stack that will be displayed (a or b).
 */
void	reverse_rotate_stack(t_node **stack, char stack_id)
{
	t_node	*top_node;
	t_node	*previous_end_node;
	t_node	*end_node;

	top_node = node_slct(stack, 0);
	if (node_counter(stack) == 2)
		swap_stack(stack, 's');
	else
	{
		previous_end_node = node_slct(stack, node_counter(stack) - 2);
		end_node = node_slct(stack, node_counter(stack) - 1);
		end_node->next = top_node;
		previous_end_node->next = NULL;
		*stack = end_node;
	}
	ft_putchar_fd(1, 'r');
	ft_putchar_fd(1, 'r');
	ft_putchar_fd(1, stack_id);
	ft_putchar_fd(1, '\n');
}
