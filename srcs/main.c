/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:07:43 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/23 14:47:52 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "printf.h"
#include "push_swap.h"

t_node	*fill_list(int ac, char **av)
{
	t_node	*stack_a;
	int		i;
	int		value;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		value = ft_atoi(av[i]);
		if (i == 1)
			stack_a = create_node(value);
		else
			append(&stack_a, value);
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	int	i;
}
