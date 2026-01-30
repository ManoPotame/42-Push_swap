/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:43:46 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/30 15:39:51 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Header/push_swap.h"

static void	indexing(t_node **stack_a)
{
	t_node	*current_node;
	t_node	*reset_stack;

	current_node = *stack_a;
	while (current_node)
	{
		current_node->index = 0;
		reset_stack = *stack_a;
		while (reset_stack)
		{
			if (current_node->nb > reset_stack->nb)
			{
				current_node->index += 1;
			}
			reset_stack = reset_stack->next;
		}
		current_node = current_node->next;
	}
}

/**
 * @brief Function which analyse the sended argument
 * and check if the string is empty or composed by space only.
 *
 * @param arg The string to be analysed.
 * @return Return 1 if the string is correct and 0 if not.
 */
void	test_arg(char *arg, t_node **stack_a)
{
	int	i;

	i = 0;
	if (!arg)
		error_manager(4, stack_a, NULL);
	while (arg[i])
	{
		if (ft_isspace(arg[i]) == 0)
		{
			return ;
		}
		i++;
	}
	error_manager(0, stack_a, NULL);
}

static void	check_splitted_args(char **splitted_arg, int idx, t_node **stack_a)
{
	int	i;

	i = 0;
	if (splitted_arg[idx][i] == '+' || splitted_arg[idx][i] == '-')
		i++;
	if (!ft_isdigit(splitted_arg[idx][i]))
	{
		ft_free_array(splitted_arg);
		error_manager(3, stack_a, NULL);
	}
	while (splitted_arg[idx][i])
	{
		if (!ft_isdigit(splitted_arg[idx][i]))
		{
			ft_free_array(splitted_arg);
			error_manager(3, stack_a, NULL);
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
			error_manager(1, stack_a, NULL);
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
		test_arg(args_list[i], stack_a);
		separated_args = ft_split(args_list[i], ' ');
		if (!separated_args)
			error_manager(5, stack_a, NULL);
		while (separated_args[j])
		{
			check_splitted_args(separated_args, j, stack_a);
			nb = ft_atoi(separated_args[j], separated_args, stack_a);
			check_doubles(nb, stack_a);
			fill_linked_list(nb, stack_a);
			j++;
		}
		ft_free_array(separated_args);
		i++;
	}
	indexing(stack_a);
}
