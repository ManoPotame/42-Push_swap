/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:43:09 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/16 10:44:55 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

t_node	*ft_lstnew(int nb)
{
	t_node	*head;

	head = ft_calloc(1, sizeof(t_node));
	if (!head)
		return (NULL);
	head->nb = nb;
	return (head);
}
