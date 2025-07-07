/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:51:12 by marvin            #+#    #+#             */
/*   Updated: 2025/07/04 23:51:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_chunk_count(int size)
{
	int	chunk_count;

	if (size <= 100)
		chunk_count = 5;
	else
		chunk_count = 11;
	return (chunk_count);
}

int	get_max_index(t_node *b)
{
	t_node	*tmp_node;
	int		max;

	tmp_node = b;
	max = tmp_node->index;
	if (!b)
		return (-1);
	while (tmp_node)
	{
		if (max < tmp_node->index)
			max = tmp_node->index;
		tmp_node = tmp_node->next;
	}
	return (max);
}

int get_position(t_node *b, int target_index)
{
	t_node	*tmp_node;
	int		pos;

	tmp_node = b;
	pos = 0;
	if (!b)
		return (-1);
	while (tmp_node)
	{
		if (target_index == tmp_node->index)
			return (pos);
		tmp_node = tmp_node->next;
		pos++;
	}
	return (-1);
}
