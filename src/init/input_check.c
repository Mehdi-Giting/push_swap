/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:48:09 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 14:48:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 1)
	{
		j = 0;
		if ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-')
		{
			if (argv[i][j] == '-')
				if (argv[i][j + 1] >= '0' && argv[i][j + 1] <= '9')
					j++;
			while (argv[i][j] >= '0' && argv[i][j] <= '9')
				j++;
		}
		if (argv[i][j] != '\0')
			return (1);
		i++;
	}
	return (0);
}

int	check_duplicate(int argc, char **argv)
{
	int		i;
	int		j;
	long	current_number;
	long	next_number;

	i = 1;
	while (i <= argc - 2)
	{
		current_number = ft_atoi(argv[i]);
		j = i + 1;
		while (j <= argc - 1)
		{
			next_number = ft_atoi(argv[j]);
			if (current_number == next_number)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
