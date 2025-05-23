/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 22:27:19 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/30 19:56:00 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u_nbr(unsigned int n)
{
	int				i;
	int				j;
	char			res[12];

	i = 0;
	if (n == 0)
		res[i++] = '0';
	while (n > 0)
	{
		res[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	j = i;
	while (--i >= 0)
		write(1, &res[i], 1);
	return (j);
}
