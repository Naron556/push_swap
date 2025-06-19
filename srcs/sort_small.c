/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 19:41:38 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/06/19 22:45:15 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

void	sort_two(t_node **head_a)
{
	int	index;

	index = (*head_a)->next->index;
	if ((*head_a)->index < index)
		swap(head_a, 1);
}

void	sort_three(t_node **head_a)
{
	int	one;
	int	two;
	int	three;

	one = (*head_a)->index;
	two = (*head_a)->next->index;
	three = (*head_a)->next->next->index;
	if (one > two && one < three)
		swap(head_a, 1);
	else if (three < one && one < two)
		reverse_rotate(head_a, 1);
	else if (one < three && three < two)
	{
		reverse_rotate(head_a, 1);
		swap(head_a, 1);
	}
	else if (two < three && three < one)
		rotate(head_a, 1);
	else if (three < two && two < one)
	{
		rotate(head_a, 1);
		swap(head_a, 1);
	}
}

void	sort_fo_five(t_node **head_a, t_node **head_b)
{
	int	size;

	size = num_of_nodes(*head_a);
	while (size != 3)
	{
		if ((*head_a)->index < 2)
		{
			push_b(head_a, head_b);
			size--;
		}
		else
			rotate(head_a, 1);
	}
	sort_three(head_a);
	push_back_to_a(head_a, head_b);
	if ((*head_a)->index > (*head_a)->next->index)
		swap(head_a, 1);
}
