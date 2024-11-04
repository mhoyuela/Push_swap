/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 16:55:54 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-30 16:55:54 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

t_stack	*ft_max(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*max;

	temp = *stack;
	max = *stack;
	while (temp)
	{
		if (temp->value > max->value)
			max = temp;
		temp = temp->next;
	}
	return (max);
}

t_stack	*ft_min(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*min;

	temp = *stack;
	min = *stack;
	while (temp)
	{
		if (temp->value < min->value)
			min = temp;
		temp = temp->next;
	}
	return (min);
}

void	ft_sort_three(t_stack **stack_a)
{
	if (!ft_is_ordered((*stack_a)))
	{
		if ((ft_max(stack_a))->pos_a == 0)
		{
			ra(stack_a);
			if (!ft_is_ordered((*stack_a)))
				sa(stack_a);
		}
		else if ((ft_max(stack_a))->pos_a == 1)
		{
			rra(stack_a);
			if (!ft_is_ordered((*stack_a)))
				sa(stack_a);
		}
		else
			sa(stack_a);
	}
}
