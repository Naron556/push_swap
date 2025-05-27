/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:49:23 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/05/27 16:44:53 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

bool	swap(t_node **head, int print_flag)
{
	int		first;
	int		second;
	int		index[2];
	bool	firstcheck;
	bool	secondcheck;

	if (*head == NULL || (*head)->next == NULL)
		return (0);
	first = 0;
	second = 0;
	index[0] = (*head)->index;
	firstcheck = pop(head, &first);
	index[1] = (*head)->index;
	secondcheck = pop(head, &second);
	if (firstcheck == false || secondcheck == false)
		return (free_list(*head), false);
	append(head, first, index[0]);
	append(head, second, index[1]);
	if (print_flag == 1)
		ft_printf("sa\n");
	if (print_flag == 2)
		ft_printf("sb\n");
	return (true);
}

void	ss(t_node **head_a, t_node **head_b)
{
	bool	firstcheck;
	bool	secondcheck;

	firstcheck = swap(head_a, 0);
	secondcheck = swap(head_b, 0);
	if (firstcheck == true || secondcheck == true)
		ft_printf("ss\n");
}

void	push_a(t_node **head_a, t_node **head_b)
{
	int	value;
	int	index;
	bool check;

	if (*head_b == NULL)
		return ;
	index = (*head_b)->index;
	check = false;
	check = pop(head_b, &value);
	append(head_a, value, index);
	if (check)
		ft_printf("Error");
	ft_printf("pa\n");
}

void	push_b(t_node **head_a, t_node **head_b)
{
	int	value;
	int	index;
	bool check;

	if (*head_a == NULL)
		return ;
	index = (*head_a)->index;
	check = false;
	check = pop(head_a, &value);
	append(head_b, value, index);
	if (check)
		ft_printf("");
	ft_printf("pb\n");
}
