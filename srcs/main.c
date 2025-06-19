/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamohamm <yasnaadli21@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:07:43 by aoperacz          #+#    #+#             */
/*   Updated: 2025/06/20 00:04:10 by yamohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

void free_ft_split(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
}

t_node *fill_list(int ac, char **av)
{
	t_node *stack_a;
	int value;
	int i;

	i = 0;
	if (*av == NULL)
		return NULL;

	stack_a = NULL;
	value = ft_atoi(av[i]);
	i++;
	stack_a = create_node(value);
	while (i < ac)
	{
		value = ft_atoi(av[i]);
		append_new(&stack_a, value, -1);
		i++;
	}
	return (stack_a);
}

t_node *input_final(int ac, char **av)
{
	int i;
	int flag;
	t_node *list;

	i = -1;
	flag = ac;
	list = NULL;
	if (ac == 1)
	{
		ac = amount_of_str(av[0], ' ');
		av = ft_split(av[0], ' ');
	}
	while (++i < ac)
		if (av == NULL || !is_number(av[i]) || exeeding_limit(av[i]) || !correct_format_check(av[i]))
		{
			if (flag == 1)
				free_ft_split(av);
			return (list);
		}
	list = fill_list(ac, av);
	if (flag == 1)
		free_ft_split(av);
	return (list);
}

void print_stack(t_node *stack)
{
	if (!stack)
	{
		ft_printf("404 Stack not found\n");
		return;
	}
	while (stack)
	{
		ft_printf("Entry %d: %d\n", stack->index, stack->value);
		stack = stack->next;
	}
}

int main(int argc, char **argv)
{
	t_node *list_a;
	t_node *list_b;

	list_b = NULL;
	if (argc < 2)
		return (write(STDERR_FILENO,"Error\n",6), 1);
	argv++;
	list_a = input_final(argc - 1, argv);
	if (list_a == NULL)
		return (write(STDERR_FILENO,"Error\n",6), 1);
	dup_check(list_a);
	assign_index(&list_a);
	if(is_sorted(list_a))
		return(0);
	if (num_of_nodes(list_a) == 2)
		sort_two(&list_a);
	else if (num_of_nodes(list_a) == 3)
		sort_three(&list_a);
	else if (num_of_nodes(list_a) <= 5)
		sort_fo_five(&list_a, &list_b);
	else
		radix(&list_a, &list_b);
	free_list(list_a);
	free_list(list_b);
	return (0);
}
