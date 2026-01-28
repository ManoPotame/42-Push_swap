/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 13:59:39 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/28 15:49:30 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

int	ft_isspace(char c_tester)
{
	if ((c_tester >= '\t' && c_tester <= '\r') || c_tester == ' ')
		return (1);
	return (0);
}
