/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:51:39 by marvin            #+#    #+#             */
/*   Updated: 2025/05/27 22:51:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	
	int		*array;
	int		size;
	if (error_check(argc, argv) == 0)
		return (0);
	stack_a = init_stack_a(argc, argv);
	if (!stack_a)
		return (1);
	size = list_size(&stack_a);
	array = stack_to_array(stack_a, size);
	if (!array)
		return (1);
	sort_array(array, size);
	assign_indexes(stack_a, array, size);
	free(array);
	push_chunk_to_b(&stack_a, &stack_b, size);
	sort_b_to_a(&stack_a, &stack_b);
	print_list(&stack_a);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}

