/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:43:46 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/24 17:07:35 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

static void	indexing(t_node **stack_a)
{
	t_node	*current_node;
	t_node	*reset_stack;

	current_node = *stack_a;
	while(current_node)
	{
		current_node->index = 0;
		reset_stack = *stack_a;
		while (reset_stack)
		{
			if(current_node->nb > reset_stack->nb)
			{
				current_node->index += 1;
			}
			reset_stack = reset_stack->next;
		}
		current_node = current_node->next;
	}
}
/**
 * @brief Function which analyse the sended argument and check if the string is empty or composed by space only.
 *
 * @param arg The string to be analysed.
 * @return Return 1 if the string is correct and 0 if not.
 */
void	test_arg(char *arg)
{
	int	i;

	i = 0;
	if(!arg)
	{
		write(2, "Error\n", 6);
		exit (EXIT_FAILURE);
	}
	while (arg[i])
	{
		if (ft_isspace(arg[i]) == 0)
		{
			return ;
		}
		i++;
	}
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

void	check_splitted_args(char *splitted_arg)
{
	int	i;

	i = 0;
	if (splitted_arg[i] == '+' || splitted_arg[i] == '-')
	{
		i++;
		if (splitted_arg[i] == '\0')
		{
			write(2, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
	}
	while (splitted_arg[i])
	{
		if (!ft_isdigit(splitted_arg[i]))
		{
			write(2, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		i++;
	}

}

void	check_doubles(int nb, t_node **stack_a)
{
	t_node	*tmp;

	tmp = *stack_a;
	while (tmp)
	{
		if (tmp->nb == nb)
		{
			write(2, "Error\n", 6);
			exit (EXIT_FAILURE);
		}
		tmp = tmp->next;
	}
}

void	parsing(int args_nb, char *args_list[], t_node **stack_a)
{
	int		i;
	int		j;
	int		nb;
	char	**separated_args;

	i = 1;
	while (i < args_nb)
	{
		j = 0;
		test_arg(args_list[i]);
		separated_args = ft_split(args_list[i], ' ');
		while (separated_args[j])
		{
			check_splitted_args(separated_args[j]);
			nb = ft_atoi(separated_args[j]);
			check_doubles(nb, stack_a);
			fill_linked_list(nb, stack_a);
			j++;
		}
		i++;
	}
	indexing(stack_a);
}

