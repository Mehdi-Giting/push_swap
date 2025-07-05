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

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	int		*array;
	int		size;

	if (!check_input(argc, argv) || !check_duplicate(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// Init stack_a
	stack_a = init_stack_a(argc, argv);
	size = list_size(&stack_a);

	// Indexing
	array = stack_to_array(stack_a, size);
	sort_array(array, size);
	assign_indexes(stack_a, array, size);
	free(array);

	// Print before
	write(1, "\n=== Before pushing ===\n", 24);
	write(1, "A: ", 3);
	print_list(&stack_a);
	write(1, "B: ", 3);
	print_list(&stack_b);

	// Push by chunks
	push_chunk_to_b(&stack_a, &stack_b, size);

	// Print after
	write(1, "\n=== After pushing ===\n", 23);
	write(1, "A: ", 3);
	print_list(&stack_a);
	write(1, "B: ", 3);
	print_list(&stack_b);

	// Cleanup
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}





