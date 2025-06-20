/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoperacz <aoperacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:07:43 by aoperacz          #+#    #+#             */
/*   Updated: 2025/05/23 18:02:31 by aoperacz         ###   ########.fr       */
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

	flag = ac;
	if (ac == 0)
	{
		ac = amount_of_str(av[0], ' ') - 1;
		av = ft_split(av[0], ' ');
	}
	stack_a = NULL;
	value = ft_atoi(av[ac]);
	ac--;
	stack_a = create_node(value);
	while (ac >= 0)
	{
		value = ft_atoi(av[ac]);
		append(&stack_a, value);
		ac--;
	}
	if (flag == 0)
		free_ft_split(av);
	return (stack_a);
}

void	print_list(t_node *list_a)
{
	write(1, "\n", 1);
	while (list_a != NULL)
	{
		ft_printf("%i ", list_a->value);
		list_a = list_a->next;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	t_node	*list_a;
	t_node	*list_b;

	list_b = NULL;
	if (argc < 2)
		return (0);
	if (argc > 2)
	{
	}
	argc--;
	argv++;
	list_a = fill_list(argc - 1, argv);
	return (0);
}
