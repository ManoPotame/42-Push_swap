/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:42:54 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/02 15:56:26 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

int	ft_atoi(const char *nptr, char **splitted_arg, t_node **stack_a)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i++] == '-')
			sign *= -1;
	}
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]) == 0)
			break ;
		result = (result * 10) + nptr[i++] - '0';
	}
	if (ft_isint(result * sign) == 0 || nptr[i] != '\0')
		ft_free_array(splitted_arg);
	if (nptr[i] != '\0')
		error_manager(stack_a);
	else if (ft_isint(result * sign) == 0)
		error_manager(stack_a);
	return ((int)(result * sign));
}
