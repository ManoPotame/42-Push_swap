/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:37:06 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/03 13:48:28 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"
#include <unistd.h>

/**
 * @brief Function which call when an error is encounter in the parsing.
 *
 * @param stack_a The entier linked list A.
 */
void	error_manager(t_node **stack_a)
{
	write(2, "Error\n", 6);
	ft_lstclear(stack_a);
	exit(EXIT_FAILURE);
}
