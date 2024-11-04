/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-12 15:09:15 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-12 15:09:15 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/mhoyuela/Desktop/push_swap_manu/pushlibft.h"

void	ft_swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;

	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	(*stack)->pos_a = 0;
	(*stack)->next->pos_a = 1;
	ft_init_pos_a(stack);
}

void	sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	ft_swap(stack_b);
	printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	printf("ss\n");
}