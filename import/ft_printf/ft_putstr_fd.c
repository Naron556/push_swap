/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:40 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/29 20:00:49 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd1(char *s, int fd)
{
	if (s == NULL)
		s = "(null)";
	write(fd, s, ft_strlen(s));
	return ((int)ft_strlen(s));
}
