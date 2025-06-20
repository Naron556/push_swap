/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 22:35:32 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/29 20:10:47 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *pointer)
{
	unsigned long	adrs;

	adrs = (unsigned long)pointer;
	if (adrs == 0)
		return (ft_putstr_fd1("(nil)", 1));
	write(1, "0x", 2);
	return (ft_hex(adrs) + 2);
}
