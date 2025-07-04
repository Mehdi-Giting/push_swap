/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 22:32:46 by marvin            #+#    #+#             */
/*   Updated: 2025/04/26 22:32:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				number;
	int				index;
	int				cost_a;
	int				cost_b;
	struct s_node	*next;
} t_node;

int		check_input(int argc, char **argv);
int		check_duplicate(int argc, char **argv);
int		ft_atoi(char *s);
t_node	*create_node(int value);
void	add_back(t_node **head, t_node *new_node);
void	add_front(t_node **head, t_node *new_node);
t_node	*init_stack_a(int argc, char **argv);
void	free_list(t_node **head);
int		list_size(t_node **head);
t_node	*get_last_node(t_node **head);
t_node	*get_before_last_node(t_node **head);
int		is_sorted(t_node **head);
void	print_list(t_node **head);
int		*stack_to_array(t_node *head, int size);
void	sort_array(int *array, int size);
void	assign_indexes(t_node *stack, int *sorted_array, int size);
void	swap_top(t_node **head);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pb(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_b, t_node **stack_a);
void	rotate(t_node **head);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);

#endif