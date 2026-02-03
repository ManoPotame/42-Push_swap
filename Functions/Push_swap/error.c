/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:37:06 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/03 10:50:56 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"
#include <unistd.h>

void	error_manager(t_node **stack_a)
{
	write(2, "Error\n", 6);
	ft_lstclear(stack_a);
	exit(EXIT_FAILURE);
}
