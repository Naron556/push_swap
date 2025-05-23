/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:08:14 by aoperacz          #+#    #+#             */
/*   Updated: 2025/04/01 20:09:28 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <stdbool.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

void				append(t_node **node, int value);
bool				pop(t_node **node, int *value);
void				rotate(t_node **head, int print_flag);
void				reverse_rotate(t_node **head, int print_flag);
t_node				*create_node(int value);
void				free_list(t_node *head);
void				rr(t_node **head_a, t_node **head_b);
void				rrr(t_node **head_a, t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
bool				swap(t_node **head, int print_flag);
void				push_a(t_node **head_a, t_node **head_b);
void				push_b(t_node **head_a, t_node **head_b);

#endif
