/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:37:06 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/30 15:40:18 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"
#include <unistd.h>

void	error_manager(int error_code, t_node **stack_a, t_node **stack_b)
{
	write(2, "Error:\n", 7);
	if (error_code == 0)
		write(2, "Arguments contain an empty String.\n", 35);
	if (error_code == 1)
		write(2, "Arguments contain same numbers.\n", 32);
	if (error_code == 2)
		write(2, "Arguments contain values bigger than Integer.\n", 46);
	if (error_code == 3)
		write(2, "Arguments contain values other than integers.\n", 46);
	if (error_code == 4)
		write(2, "Did not cointain argument.\n", 27);
	if (error_code == 5)
		write(2, "Error when splitting.\n", 22);
	ft_lstclear(stack_a);
	ft_lstclear(stack_b);
	exit(EXIT_FAILURE);
}
