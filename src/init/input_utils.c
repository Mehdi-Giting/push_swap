/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:16:49 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:16:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_back(t_node **head, t_node *new_node)
{
	t_node *tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next = new_node;
	}
}

void	add_front(t_node **head, t_node *new_node)
{
	t_node *tmp_node;

	tmp_node = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = tmp_node;
		*head = new_node;
	}
}

int	ft_atoi(char *s)
{
	long	num;
	long	sign;
	int		i;

	num = 0;
	sign = 1;
	i = 0;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i])
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	num = num * sign;
	return (num);
}
