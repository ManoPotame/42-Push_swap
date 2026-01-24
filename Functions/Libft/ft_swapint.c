/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:58:33 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/20 10:59:22 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

void	swap_int(int *first_nb, int *second_nb)
{
	int	tmp_nb;

	tmp_nb = *first_nb;
	*first_nb = *second_nb;
	*second_nb = tmp_nb;
}
