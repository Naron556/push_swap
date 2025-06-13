/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:08:51 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/06/12 17:58:01 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int	get_max_bits(int num_of_nodes)
{
	int	bits;

	bits = 0;
	num_of_nodes--;
	while ((num_of_nodes >> bits) != 0)
		bits++;
	return (bits);
}

void	push_back_to_a(t_node **head_a, t_node **head_b)
{
	while (*head_b)
		push_a(head_a, head_b);
}

int	is_sorted(t_node *head_a)
{
	int	i;
	int	index;

	i = 0;
	index = num_of_nodes(head_a);
	while (i < index)
	{
		if (i != head_a->index)
			return (0);
		head_a = head_a->next;
		i++;
	}
	return (1);
}

void	radix(t_node **head_a, t_node **head_b)
{
	int	max_bits;
	int	bit;
	int	size;

	bit = 0;
	max_bits = get_max_bits(num_of_nodes(*head_a));
	while (bit < max_bits && (is_sorted(*head_a) == 0))
	{
		size = num_of_nodes(*head_a);
		while (size-- && !is_sorted(*head_a))
		{
			if ((((*head_a)->index >> bit) & 1) == 1)
				rotate(head_a, 1);
			else
				push_b(head_a, head_b);
		}
		push_back_to_a(head_a, head_b);
		bit++;
	}
}
