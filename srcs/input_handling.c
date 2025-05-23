/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:02:03 by arkadiusz         #+#    #+#             */
/*   Updated: 2025/05/19 14:12:26 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include "push_swap.h"

bool	is_number(char *av)
{
	int	i;

	i = 0;
	if (av[i] && av[i] == '-' || av[i] && av[i] == '+')
		i++;
	while (av[i])
	{
		if (ft_isdigit(av[i]) == 0)
			return (false);
		i++;
	}
	return (true);
}

bool	exeeding_limit(char *av)
{
	char	*max_int;
	char	*min_int;

	*max_int = "2147483647";
	*min_int = "-2147483648";
	if (ft_strlen(*av) > 11)
		return (true);
	if (av[0] == '-' && ft_strlen(av) == 11)
	{
		if (strncmp(av, min_int, ft_strlen(av)) > 0)
			return (true);
	}
	else if (ft_strncmp(av, max_int, ft_strlen(av)) > 0 && ft_strlen(av) == 10)
		return (true);
	return (false);
}
