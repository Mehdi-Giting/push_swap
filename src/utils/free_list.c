/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:43:27 by marvin            #+#    #+#             */
/*   Updated: 2025/07/03 15:43:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **head)
{
	t_node	*tmp_node;
	
	if (*head == NULL)
		return ;
	while ((*head)->next != NULL)
	{
		tmp_node = (*head)->next;
		free(*head);
		*head = tmp_node;
	}
	free(*head);
	*head = NULL;
}