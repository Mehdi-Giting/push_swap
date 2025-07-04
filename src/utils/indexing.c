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
	
}