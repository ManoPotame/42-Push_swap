/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:43:46 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/20 17:48:08 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

static void	indexing(t_node **stack_a)
{
	t_node	*current_node;
	t_node	*reset_stack;

	current_node = *stack_a;
	while(current_node)
	{
		current_node->index = 0;
		reset_stack = *stack_a;
		while (reset_stack)
		{
			if(current_node->nb > reset_stack->nb)
			{
				current_node->index += 1;
			}
			reset_stack = reset_stack->next;
		}
		current_node = current_node->next;
	}
}

void	parsing(int args_nb, char const *args_list[], t_node **stack_a)
{
	int		i;
	int		j;
	int		nb;
	char	**separated_args;

	i = 1;
	while (i < args_nb)
	{
		j = 0;
		separated_args = ft_split(args_list[i], ' ');
		while (separated_args[j])
		{
			nb = ft_atoi(separated_args[j]);
			fill_linked_list(nb, stack_a);
			j++;
		}
		i++;
	}
	indexing(stack_a);
}

