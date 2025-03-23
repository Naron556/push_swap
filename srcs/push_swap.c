/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:49:23 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/03/23 11:03:15 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "printf.h"
#include "libft.h"

int	swap(t_node **head, int print_flag)
{
	int	first;
	int	second;

	if (*head == NULL || (*head)->next == NULL)
		return (0);
	first = pop(head);
	second = pop(head);
	append(head, first);
	append(head, second);
	if (print_flag == 1)
		ft_printf("sa\n");
	if (print_flag == 2)
		ft_printf("sb\n");
}

void	ss(t_node **head_a, t_node **head_b, int check)
{
	int	check1;
	int	check2;

	swap(head_a, 0);
	swap(head_b, 0);
	if (check1 == 1 || check2 == 1)
		ft_printf("ss\n");
}

void	push_a(t_node **head_a, t_node **head_b)
{
	int	value;

	if (*head_b == NULL)
		return ;
	value = pop(head_b);
	append(head_a, value);
	ft_printf("pa\n");
}

void	push_b(t_node **head_a, t_node **head_b)
{
	int	value;

	if (*head_a == NULL)
		return ;
	value = pop(head_a);
	append(head_b, value);
	ft_printf("pb\n");
}
