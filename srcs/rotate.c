/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 10:59:02 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/03/23 11:02:24 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "printf.h"

void	rotate(t_node **head, int print_flag)
{
	t_node	*first;
	t_node	*temp;
	t_node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	temp = *head;
	while (temp->next->next != NULL)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = first;
	*head = last->next;
	first->next = NULL;
	temp->next = first;
	if (print_flag == 1)
		ft_printf("ra\n");
	if (print_flag == 2)
		ft_printf("rb\n");
}

void	reverse_rotate(t_node **head, int print_flag)
{
	t_node	*temp;
	t_node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	temp = *head;
	last = *head;
	*head = (*head)->next;
	last->next = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = last;
	if (print_flag == 1)
		ft_printf("rra\n");
	if (print_flag == 2)
		ft_printf("rrb\n");
}

void	rr(t_node **head_a, t_node **head_b)
{
	rotate(head_a, 0);
	rotate(head_b, 0);
	ft_printf("rr\n");
}

void	rrr(t_node **head_a, t_node **head_b)
{
	reverse_rotate(head_a, 0);
	reverse_rotate(head_b, 0);
	ft_printf("rrr\n");
}
