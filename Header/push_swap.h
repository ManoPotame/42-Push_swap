/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrenn <mcrenn@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 10:00:02 by mcrenn            #+#    #+#             */
/*   Updated: 2026/01/16 13:17:39 by mcrenn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <limits.h>

/**
 * @brief Linked list to store all gived numbers.
 * @param nb The number which is add to the list.
 * @param next The address of the next node.
 */
typedef struct node
{
	int	nb;
	struct	node *next;
}t_node;

// Libft
int		ft_atoi(const char *nptr);
int		ft_isdigit(int c);
int		ft_isint(long int_tester);


char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_lstadd_back(t_node **lst, t_node *new);
void	*ft_memset(void *s, int c, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);

t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(int nb);


// Push_swap
void	fill_linked_list(int nb, t_node *stack_a);

#endif
