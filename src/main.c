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

int	main(void)
{
	t_node *stack_a = NULL;
	t_node *stack_b = NULL;

	// Simulate values in stack_a
	add_back(&stack_a, create_node(10));
	add_back(&stack_a, create_node(20));
	add_back(&stack_a, create_node(30));

	int	*arr = stack_to_array(stack_a, list_size(&stack_a));
	sort_array(arr, list_size(&stack_a));
	assign_indexes(stack_a, arr, list_size(&stack_a));

	printf("\n=== Before pb ===\n");
	printf("A: "); print_list(&stack_a);
	printf("\n");
	printf("B: "); print_list(&stack_b);
	printf("\n");

	pb(&stack_a, &stack_b);
	pb(&stack_a, &stack_b);

	printf("\n=== After two pb ===\n");
	printf("A: "); print_list(&stack_a);
	printf("\n");
	printf("B: "); print_list(&stack_b);
	printf("\n");

	pa(&stack_b, &stack_a);

	printf("\n=== After pa ===\n");
	printf("A: "); print_list(&stack_a);
	printf("\n");
	printf("B: "); print_list(&stack_b);
	printf("\n");

	// Cleanup
	free_list(&stack_a);
	free_list(&stack_b);
}



