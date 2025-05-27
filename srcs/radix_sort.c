/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 19:08:51 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/05/26 21:26:10 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int	get_max_bits(int max_index)
{
	int	bits;

	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	push_by_bit(t_node **a, t_node **b, int bit, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (((*a)->index >> bit) & 1)
			rotate(a, 1);
		else
			push_b(b, a);
		i++;
	}
}

void	push_back_to_a(t_node **a, t_node **b)
{
	while (*b)
		push_a(a, b);
}

void	radix_sort(t_node **a, t_node **b)
{
	int	size;
	int	max_bits;
	int	i;

	size = num_of_nodes(*a);
	max_bits = get_max_bits(size - 1);
	i = 0;
	while (i < max_bits)
	{
		push_by_bit(a, b, i, size);
		push_back_to_a(a, b);
		i++;
	}
}
