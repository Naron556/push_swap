/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoperacz <aoperacz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 10:08:14 by aoperacz          #+#    #+#             */
/*   Updated: 2025/03/19 12:06:28 by aoperacz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#if !defined(PUSH_SWAP_H)
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

void				push(t_node node, int value);
void				pop(t_node node);

#endif
