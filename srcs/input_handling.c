/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:02:03 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/06/19 23:04:08 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

int	is_number(char *av)
{
	int	i;

	i = 0;
	if ((av[i] && av[i] == '-') || (av[i] && av[i] == '+'))
		i++;
	while (av[i])
	{
		if (ft_isdigit(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	exeeding_limit(char *av)
{
	char	*max_int;
	char	*min_int;

	max_int = "2147483647";
	min_int = "-2147483648";
	if (ft_strlen(av) > 11)
		return (1);
	if (av[0] == '-' && ft_strlen(av) == 11)
	{
		if (strncmp(av, min_int, ft_strlen(av)) > 0)
			return (1);
	}
	else if (ft_strncmp(av, max_int, ft_strlen(av)) > 0 && ft_strlen(av) == 10)
		return (1);
	return (0);
}

int	correct_format_check(char *av)
{
	int	i;

	i = 0;
	if (av[0] == '\0')
		return (0);
	while (av[i])
	{
		if (av[i] == '"')
			return (0);
		i++;
	}
	return (1);
}

void	dup_check(t_node *head)
{
	t_node	*current;
	t_node	*checker;

	current = head;
	while (current != NULL)
	{
		checker = current->next;
		while (checker != NULL)
		{
			if (current->value == checker->value)
			{
				ft_printf("Error\n");
				free_list(head);
				exit(1);
			}
			checker = checker->next;
		}
		current = current->next;
	}
}
