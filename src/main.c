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

	// Fill stack_a with sample data
	add_back(&stack_a, create_node(10));
	add_back(&stack_a, create_node(20));
	add_back(&stack_a, create_node(30));

	// Fill stack_b with sample data
	add_back(&stack_b, create_node(40));
	add_back(&stack_b, create_node(50));
	add_back(&stack_b, create_node(60));

	printf("\n=== Before reverse rotates ===\n");
	printf("A: "); print_list(&stack_a);
	printf("B: "); print_list(&stack_b);

	rra(&stack_a);
	rrb(&stack_b);

	printf("\n=== After rra and rrb ===\n");
	printf("A: "); print_list(&stack_a);
	printf("B: "); print_list(&stack_b);

	rrr(&stack_a, &stack_b);

	printf("\n=== After rrr ===\n");
	printf("A: "); print_list(&stack_a);
	printf("B: "); print_list(&stack_b);

	// Free memory
	free_list(&stack_a);
	free_list(&stack_b);

	return (0);
}




