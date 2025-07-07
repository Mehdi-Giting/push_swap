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

	if (argc < 2)
		return (0);
	// 1) Validate input
	if (!check_input(argc, argv) || !check_duplicate(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	// 2) Build stack A
	stack_a = init_stack_a(argc, argv);
	if (!stack_a)
		return (1);
	// 3) Assign indexes
	size = list_size(&stack_a);
	array = stack_to_array(stack_a, size);
	if (!array)
		return (1);
	sort_array(array, size);
	assign_indexes(stack_a, array, size);
	free(array);

	// 4) Show before work
	// printf("\n=== Before sorting ===\n");
	// printf("A: "); print_list(&stack_a);
	// printf("B: "); print_list(&stack_b);

	// 5) Phase 1: push to B in chunks
	push_chunk_to_b(&stack_a, &stack_b, size);

	// 6) Phase 2: sort back from B to A
	sort_b_to_a(&stack_a, &stack_b);

	// 7) Show after
	// printf("\n=== After sorting ===\n");
	// printf("A: "); print_list(&stack_a);
	// printf("B: "); print_list(&stack_b);
	// printf("\n");

	// 8) Cleanup
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}

