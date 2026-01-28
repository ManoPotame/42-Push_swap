/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:05:45 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/28 15:50:13 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

int	main(int argc, char *argv[])
{
	int		nb_node;
	t_node	*stack_a;
	t_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parsing(argc, argv, &stack_a);
	if (node_sorted(&stack_a) == 1)
		return (0);
	nb_node = node_counter(&stack_a);
	if (nb_node > 5)
		butterfly_sort(&stack_a, &stack_b);
	else
		choose_sort(&stack_a, &stack_b, nb_node);
}
