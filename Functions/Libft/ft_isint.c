/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 14:38:09 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/15 15:55:53 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

int	ft_isint(long int_tester)
{
	if (int_tester >= INT_MIN && int_tester <= INT_MAX)
		return (1);
	return (0);
}
