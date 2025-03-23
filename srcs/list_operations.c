/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 12:29:16 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/23 10:59:32 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"
#include "printf.h"

void	append(t_node **node, int value)
{
	t_node	*new_node;
	t_node	*temp;

	new_node = create_node(value);
	if (!new_node)
	{
		free_list(*node);
		return ;
	}
	if (*node == NULL)
	{
		*node = new_node;
		return ;
	}
	temp = *node;
	while (temp != NULL)
		temp = temp->next;
	temp->next = new_node;
}

int	pop(t_node **node)
{
	t_node	*temp;
	int		value;

	temp = *node;
	while (temp->next != NULL)
		temp = temp->next;
	value = temp->value;
	free(temp);
	return (value);
}

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	free_list(t_node *head)
{
	t_node	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	neg_flag;
	int	res;

	i = 0;
	neg_flag = 1;
	res = 0;
	if (str[i] == '-')
	{
		if (str[i + 1] == '+')
			return (0);
		neg_flag = -1;
		i++;
	}
	if ((str[i] < 48 || str[i] > 57) && str[i] != '+')
		return (0);
	if (str[i] == '+')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res *= neg_flag;
	return (res);
}
