/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:42:48 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:42:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->number = value;
	new_node->next = NULL;
	return (new_node);
}

t_node	*init_stack_a(int argc, char **argv)
{
	t_node	*head;
	t_node	*new_node;
	int		i;

	i = 1;
	head = create_node(ft_atoi(argv[i]));
	i++;
	while (i <= argc - 1)
	{
		new_node = create_node(ft_atoi(argv[i]));
		add_back(&head, new_node);
		i++;
	}
	return (head);
}