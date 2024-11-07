/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 10:43:02 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-10-25 10:43:02 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

t_stack	*ft_cheapest(t_stack **stack_b)
{
	t_stack	*aux;
	t_stack	*cheapest;

	aux = *stack_b;
	cheapest = *stack_b;
	while (aux)
	{
		if (aux->cost_t < cheapest->cost_t)
		{
			cheapest = aux;
		}
		aux = aux->next;
	}
	return (cheapest);
}

void	comb_operations(t_stack **stack_a, t_stack **stack_b, t_stack *node_b)
{
	if (node_b->op_a == node_b->op_b)
	{
		if (node_b->op_a == 0)
		{
			while (node_b->cost_a > 0 && node_b->cost_b > 0)
			{
				rr(stack_a, stack_b);
				node_b->cost_a--;
				node_b->cost_b--;
			}
		}
		else if (node_b->op_b == 1)
		{
			while (node_b->cost_a > 0 && node_b->cost_b > 0)
			{
				rrr(stack_a, stack_b);
				node_b->cost_a--;
				node_b->cost_b--;
			}
		}
	}
}

void	execute_stack_a_operations(t_stack **stack_a, t_stack *node_b)
{
	while (node_b->cost_a > 0)
	{
		if (node_b->op_a == 0)
			ra(stack_a);
		else
			rra(stack_a);
		node_b->cost_a--;
	}
}

void	execute_stack_b_operations(t_stack **stack_b, t_stack *node_b)
{
	while (node_b->cost_b > 0)
	{
		if (node_b->op_b == 0)
			rb(stack_b);
		else
			rrb(stack_b);
		node_b->cost_b--;
	}
}

void	cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node_b;

	node_b = ft_cheapest(stack_b);
	comb_operations(stack_a, stack_b, node_b);
	execute_stack_a_operations(stack_a, node_b);
	execute_stack_b_operations(stack_b, node_b);
	pa(stack_b, stack_a);
}
