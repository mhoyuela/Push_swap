/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-12 15:14:18 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-12 15:14:18 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*secondlast;
	t_stack	*first;

	first = *stack;
	secondlast = *stack;
	while (secondlast->next->next)
		secondlast = secondlast->next;
	last = secondlast->next;
	last->next = first;
	secondlast->next = NULL;
	*stack = last;
	ft_init_pos_a(stack);
}

void	rra(t_stack **stack_a)
{
	ft_reverse_rotate(stack_a);
	printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	ft_reverse_rotate(stack_b);
	printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reverse_rotate(stack_a);
	ft_reverse_rotate(stack_b);
	printf("rrr\n");
}
