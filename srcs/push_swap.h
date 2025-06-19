/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkadiusz <arkadiusz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:08:14 by aoperacz          #+#    #+#             */
/*   Updated: 2025/06/19 21:54:22 by arkadiusz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

void				append(t_node **node, int value, int index);
int					pop(t_node **node, int *value);
void				rotate(t_node **head, int print_flag);
void				reverse_rotate(t_node **head, int print_flag);
t_node				*create_node(int value);
void				free_list(t_node *head);
void				rr(t_node **head_a, t_node **head_b);
void				rrr(t_node **head_a, t_node **head_b);
void				ss(t_node **head_a, t_node **head_b);
int					swap(t_node **head, int print_flag);
void				push_a(t_node **head_a, t_node **head_b);
void				push_b(t_node **head_a, t_node **head_b);
void				assign_index(t_node **head);
int					num_of_nodes(t_node *head);
void				radix(t_node **head_a, t_node **head_b);
void				push_back_to_a(t_node **head_a, t_node **head_b);
int					get_max_bits(int max_index);
void				append_new(t_node **node, int value, int index);
void				sort_two(t_node **head_a);
void				sort_three(t_node **head_a);
void				sort_fo_five(t_node **head_a, t_node **head_b);
int					is_number(char *av);
int					exeeding_limit(char *av);
int					correct_format_check(char *av);
void				dup_check(t_node *head);

#endif
