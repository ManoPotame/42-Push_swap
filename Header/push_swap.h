/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:00:02 by mcrenn            #+#    #+#             */
/*   Updated: 2026/02/02 15:55:51 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/**
 * @brief Linked list to store all gived numbers.
 * @param nb The number which is add to the list.
 * @param index The index of each nb.
 * @param next The address of the next node.
 */
typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
}	t_node;

// Libft
int	ft_atoi(const char *nptr, char **splitted_arg, t_node **stack_a);
int		ft_isdigit(int c);
int		ft_isint(long int_tester);
int		ft_isspace(char c_tester);
int		max_index(t_node **stack);
int		pos_index(t_node **stack, int max_index);

char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_free_array(char **array);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	ft_lstclear(t_node **lst);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar_fd(int fd, char c);
void	swap_int(int *first_nb, int *second_nb);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int nb);

int		node_counter(t_node **stack);
int		node_sorted(t_node **stack);

// Push Swap
t_node	*node_slct(t_node **stack, int limiter);

void	fill_linked_list(int nb, t_node **stack_a);
void	parsing(int args_nb, char *args_list[], t_node **stack_a);
void	choose_sort(t_node **stack_a, t_node **stack_b, int nb_node);
void	butterfly_sort(t_node **stack_a, t_node **stack_b);
void	swap_stack(t_node **stack, char stack_id);
void	push_stack(t_node **stack_rmv, t_node **stack_add, char stack_id);
void	rotate_stack(t_node **stack, char stack_id);
void	reverse_rotate_stack(t_node **stack, char stack_id);
void	error_manager(t_node **stack_a);

#endif
