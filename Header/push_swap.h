/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:00:02 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/14 10:11:07 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Linked list to store all gived numbers.
 * @param nb The number which is add to the list.
 * @param next The address of the next node.
 * @param prev The address of the previous node.
 */
typedef struct node
{
	int	nb;
	struct	node *next;
	struct	node *prev;

}t_node;
