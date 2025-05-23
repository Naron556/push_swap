/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 20:39:59 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/29 20:00:42 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *arg, ...);
int		ft_putchar_fd1(char c, int fd);
int		ft_putnbr_fd1(int n, int fd);
int		ft_hex(unsigned long n);
int		ft_hexx(unsigned long n);
size_t	ft_strlen(const char *s);
int		ft_putstr_fd1(char *s, int fd);
int		ft_put_u_nbr(unsigned int n);
int		hexlen(unsigned long n);
int		ft_pointer(void *pointer);

#endif