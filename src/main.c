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
	t_node	*stack_a;
	int		*array;
	int		size;

	if (argc < 2)
		return (0);

	if (check_input(argc, argv) || check_duplicate(argc, argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}

	// Step 1: Build stack from argv
	stack_a = init_stack_a(argc, argv);

	// Step 2: Convert to array
	size = list_size(&stack_a);
	array = stack_to_array(stack_a, size);
	if (!array)
	{
		write(2, "Malloc error\n", 13);
		return (1);
	}

	// Step 3: Sort array
	sort_array(array, size);

	// Step 4: Assign indexes
	assign_indexes(stack_a, array, size);

	// Step 5: Print result
	print_list(&stack_a); // Should show each node’s number + index
	printf("\n");

	free(array);
	free_list(&stack_a);
	return (0);
}

