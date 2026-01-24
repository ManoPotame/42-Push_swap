/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:42:54 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/19 15:33:31 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	if(!nptr)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i])
	{
		if (ft_isdigit(nptr[i]) == 0)
		{
			write(2, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	if (ft_isint(result * sign) == 0)
	{
		write(2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	return ((int)(result * sign));
}
