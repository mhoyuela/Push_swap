/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-02 14:09:53 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-02 14:09:53 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/mhoyuela/Desktop/push_swap_manu/pushlibft.h"
#include <stdio.h>

t_stack	*ft_new_node(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack) * 1);
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

void	ft_add_back(t_stack **stack, t_stack *node)
{
	t_stack	*tmp_stack;

	tmp_stack = *stack;
	if (*stack == NULL)
	{
		*stack = node;
		return ;
	}
	node->next = NULL;
	while (tmp_stack->next)
		tmp_stack = tmp_stack->next;
	tmp_stack->next = node;
}

void	ft_add_front(t_stack **stack, t_stack *node)
{
	node->next = *stack;
	*stack = node;
}

/* void	ft_print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("value: %d, pos_f: %d, pos_a: %d stack_size: %d, cost_a: %d, cost_b: %d, cost_t: %d, next: %p, op_a: %d, op_b: %d\n",
		stack->value, stack->pos_f, stack->pos_a, stack->size, stack->cost_a, stack->cost_b, stack->cost_t, stack->next, stack->op_a, stack->op_b);
		stack = stack->next;
	}
} */
