/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-12 15:08:55 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-12 15:08:55 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*last;

	first = *stack;
	last = *stack;
	second = (*stack)->next;
	while (last->next)
		last = last->next;
	*stack = second;
	first->next = NULL;
	last->next = first;
	ft_init_pos_a(stack);
}

void	ra(t_stack **stack_a)
{
	ft_rotate(stack_a);
	printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	ft_rotate(stack_b);
	printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	printf("rr\n");
}
