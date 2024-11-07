/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-02 15:29:43 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-02 15:29:43 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

int	*ft_sort_array(t_stack *stack, int *array, int size, int i)
{
	int	tab;
	int	j;

	while (stack)
	{
		array[++i] = stack->value;
		stack = stack->next;
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tab = array[i];
				array[i] = array[j];
				array[j] = tab;
			}
			j++;
		}
		i++;
	}
	return (array);
}

void	ft_min_max(t_stack **stack_a)
{
	while (!ft_is_ordered(*stack_a))
	{
		if (ft_min(stack_a)->pos_a <= ft_stack_size(*stack_a) / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
}
