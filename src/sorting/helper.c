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
