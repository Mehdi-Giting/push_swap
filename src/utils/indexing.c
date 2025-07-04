/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 11:22:34 by marvin            #+#    #+#             */
/*   Updated: 2025/07/04 11:22:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*stack_to_array(t_node *head, int size)
{
	int		*array;
	int		i;
	t_node	*tmp_node;

	tmp_node = head;
	i = 0;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	while (tmp_node)
	{
		array[i] = tmp_node->number;
		tmp_node = tmp_node->next;
		i++;
	}
	return (array);
}

void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	assign_indexes(t_node *stack, int *sorted_array, int size)
{
	t_node	*tmp_node;
	int		i;

	tmp_node = stack;
	while (tmp_node)
	{
		i = 0;
		while (i < size)
		{
			if (tmp_node->number == sorted_array[i])
			{
				tmp_node->index = i;
				i = size;
			}
			i++;
		}
		tmp_node = tmp_node->next;
	}
}