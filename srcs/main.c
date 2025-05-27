/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:07:43 by aoperacz          #+#    #+#             */
/*   Updated: 2025/05/26 22:02:56 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

void	free_ft_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i++]);
	}
	free(str);
}

t_node	*fill_list(int ac, char **av)
{
	t_node	*stack_a;
	int		value;
	int		flag;
	int		i;

	flag = ac;
	i = 0;
	if (ac == 0)
	{
		ac = amount_of_str(av[0], ' ') - 1;
		av = ft_split(av[0], ' ');
	}
	stack_a = NULL;
	value = ft_atoi(av[i]);
	i++;
	stack_a = create_node(value);
	while (i <= ac)
	{
		value = ft_atoi(av[i]);
		append(&stack_a, value, -1);
		i++;
	}
	if (flag == 0)
		free_ft_split(av);
	return (stack_a);
}

// void	print_list(t_node *list_a)
// {
// 	write(1, "\n", 1);
// 	while (list_a != NULL)
// 	{
// 		ft_printf("%i ", list_a->value);
// 		list_a = list_a->next;
// 	}
// 	write(1, "\n", 1);
// }
void	print_stack(t_node *stack)
{
	if (!stack)
	{
		ft_printf("404 Stack not found\n");
		return ;
	}
	while (stack)
	{
		ft_printf("Entry %d: %d\n", stack->index, stack->value);
		stack = stack->next;
	}
}

int	main(int argc, char **argv)
{
	t_node	*list_a;
	t_node	*list_b;

	list_b = NULL;
	if (argc < 2)
		return (0);
	// if (argc > 2)
	// {
	// }
	argc--;
	argv++;
	list_a = fill_list(argc - 1, argv);
	assign_index(&list_a);
	ft_printf("\n");
	print_stack(list_a);
	swap(&list_a, 1);
	ft_printf("\n");
	print_stack(list_a);
	push_b(&list_a, &list_b);
	ft_printf("\n");
	print_stack(list_a);
	push_b(&list_a, &list_b);
	ft_printf("\n");
	print_stack(list_a);
	ss(&list_a, &list_b);
	ft_printf("\n");
	print_stack(list_a);
	rotate(&list_a, 1);
	ft_printf("\n");
	print_stack(list_a);
	rr(&list_a, &list_b);
	ft_printf("\n");
	print_stack(list_a);
	reverse_rotate(&list_a, 1);
	ft_printf("\n");
	print_stack(list_a);
	reverse_rotate(&list_b, 2);
	ft_printf("\n");
	print_stack(list_a);
	rrr(&list_a, &list_a);
	ft_printf("\n");
	print_stack(list_a);
	return (0);
}
