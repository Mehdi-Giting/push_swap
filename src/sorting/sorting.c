/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 23:44:59 by marvin            #+#    #+#             */
/*   Updated: 2025/07/04 23:44:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_one_chunk(t_node **a, t_node **b, int lower, int upper, int size)
{
	int	try;
	int	pushed;

	try = 0;
	pushed = 0;
	while (try < size && pushed < (size / get_chunk_count(size)))
	{
		if ((*a)->index >= lower && (*a)->index <= upper)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
		try++;
	}
}

void	push_chunk_to_b(t_node **a, t_node **b, int size)
{
	int	current_chunk;
	int	lower;
	int	upper;

	current_chunk = 1;
	if (!(*a))
		return ;
	while (current_chunk <= get_chunk_count(size))
	{
		lower = (current_chunk - 1) * (size / get_chunk_count(size));
		upper = (current_chunk * (size / get_chunk_count(size))) - 1;
		push_one_chunk(a, b, lower, upper, size);
		current_chunk++;
	}
}
