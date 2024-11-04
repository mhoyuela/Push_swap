/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 17:17:37 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-10-28 17:17:37 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

void	set_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*aux;

	aux = *stack_b;
	while (aux)
	{
		cost_a(stack_a, aux);
		cost_b(stack_b, aux);
		cost_t(aux);
		aux = aux->next;
	}
}

void	cost_a(t_stack **stack_a, t_stack *node_b)
{
	t_stack	*target;
	t_stack	*min;
	t_stack	*max;
	int		len;

	min = ft_min(stack_a);
	max = ft_max(stack_a);
	len = ft_stack_size(*stack_a);
	target = NULL;
	if (node_b->value < min->value || node_b->value > max->value)
	{
		target = min;
		if (min->pos_a <= (len / 2))
		{
			node_b->cost_a = min->pos_a;
			node_b->op_a = 0;
		}
		else
		{
			node_b->cost_a = len - min->pos_a;
			node_b->op_a = 1;
		}
	}
	else
		cost_a_next(stack_a, node_b, target);
}

void	cost_a_next(t_stack **stack_a, t_stack *node_b, t_stack *target)
{
	int		len;

	len = ft_stack_size(*stack_a);
	target = find_target(stack_a, node_b);
	if (target->pos_a <= len / 2)
	{
		node_b->cost_a = target->pos_a;
		node_b->op_a = 0;
	}
	else
	{
		node_b->cost_a = len - target->pos_a;
		node_b->op_a = 1;
	}
}

void	cost_b(t_stack **stack_b, t_stack *node_b)
{
	int	len;

	len = ft_stack_size(*stack_b);
	if (node_b->pos_a <= (len / 2))
	{
		node_b->cost_b = node_b->pos_a;
		node_b->op_b = 0;
	}
	else
	{
		node_b->cost_b = len - node_b->pos_a;
		node_b->op_b = 1;
	}
}
