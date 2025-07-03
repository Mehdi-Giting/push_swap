/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:43:30 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:43:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_node **head)
{
	int		i;
	t_node 	*tmp_node;

	i = 0;
	tmp_node = *head;
	if (*head != NULL)
	{
		while (tmp_node->next != NULL)
		{
			tmp_node = tmp_node->next;
			i++;
		}
		i++;
	}
	return (i);
}

t_node	*get_last_node(t_node **head)
{
	t_node	*tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		return (NULL);
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	return (tmp_node);
}

t_node	*get_before_last_node(t_node **head)
{
	t_node	*tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		return (NULL);
	while (tmp_node->next != NULL && (tmp_node->next)->next != NULL)
		tmp_node = tmp_node->next;
	return (tmp_node);
}

int	is_sorted(t_node **head)
{
	t_node	*node_a;
	t_node	*node_b;

	node_a = *head;
	if (*head == NULL)
		return (0);
	while (node_a->next != NULL)
	{
		node_b = node_a->next;
		if (node_a->number > node_b->number)
			return (0);
		node_a = node_a->next;
	}
	return (1);
}

void	print_list(t_node **head)
{
	t_node	*tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		return ;
	while (tmp_node->next != NULL)
	{
		printf("[%i]", tmp_node->number);
		tmp_node = tmp_node->next;
	}
	printf("[%i]\n", tmp_node->number);
}