/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:40 by aoperacz          #+#    #+#             */
/*   Updated: 2025/06/19 22:13:32 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd1(char *s, int fd)
{
	if (s == NULL)
		s = "(null)";
	write(fd, s, ft_strl(s));
	return ((int)ft_strl(s));
}
