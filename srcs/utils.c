/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:24:14 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/05/26 18:51:57 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include "push_swap.h"

void	assign_index(t_node **head)
{
	int		index;
	int		c_max;
	t_node	*start;
	t_node	*node;

	index = num_of_nodes(*head) - 1;
	while (index >= 0)
	{
		start = *head;
		c_max = -2147483648;
		while (start)
		{
			if (start->value >= c_max && start->index == -1)
			{
				c_max = start->value;
				node = start;
			}
			start = start->next;
		}
		node->index = index--;
	}
}

int	num_of_nodes(t_node *head)
{
	int	i;

	i = 0;
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
