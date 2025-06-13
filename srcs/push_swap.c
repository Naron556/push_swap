/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:49:23 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/06/12 21:09:08 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int	swap(t_node **head, int print_flag)
{
	int	value[2];
	int	index[2];
	int	check[2];

	if (*head == NULL || (*head)->next == NULL)
		return (0);
	index[0] = (*head)->index;
	index[1] = (*head)->next->index;
	check[0] = pop(head, &value[0]);
	check[1] = pop(head, &value[1]);
	if (check[0] == 0 || check[1] == 0)
		return (free_list(*head), 0);
	append(head, value[0], index[0]);
	append(head, value[1], index[1]);
	if (print_flag == 1)
		ft_printf("sa\n");
	if (print_flag == 2)
		ft_printf("sb\n");
	return (1);
}

void	ss(t_node **head_a, t_node **head_b)
{
	int	firstcheck;
	int	secondcheck;

	firstcheck = swap(head_a, 0);
	secondcheck = swap(head_b, 0);
	if (firstcheck == 1 || secondcheck == 1)
		ft_printf("ss\n");
}

void	push_a(t_node **head_a, t_node **head_b)
{
	int	value;
	int	index;
	int	check;

	if (*head_b == NULL)
		return ;
	index = (*head_b)->index;
	check = 0;
	check = pop(head_b, &value);
	append(head_a, value, index);
	if (check == 0)
		ft_printf("");
	ft_printf("pa\n");
}

void	push_b(t_node **head_a, t_node **head_b)
{
	int	value;
	int	index;
	int	check;

	if (*head_a == NULL)
		return ;
	index = (*head_a)->index;
	check = 0;
	check = pop(head_a, &value);
	append(head_b, value, index);
	if (check)
		ft_printf("");
	ft_printf("pb\n");
}
