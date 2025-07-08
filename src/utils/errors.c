/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:43:25 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:43:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_check(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	if (!check_input(argc, argv) || !check_duplicate(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}