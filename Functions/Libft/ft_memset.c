/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:52:59 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/16 13:12:19 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	index;

	if (!s)
		return (NULL);
	index = 0;
	while (index < n)
	{
		((char *)s)[index] = c;
		index ++;
	}
	return (s);
}
