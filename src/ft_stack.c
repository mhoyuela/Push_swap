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

#include "../pushlibft.h"

t_stack	*ft_new_node(int value)
{
	t_stack	*new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

int	ft_add_back(t_stack **stack, t_stack *node)
{
	t_stack	*tmp_stack;

	tmp_stack = *stack;
	if (*stack == NULL)
	{
		*stack = node;
		return (1);
	}
	while (tmp_stack->next)
		tmp_stack = tmp_stack->next;
	tmp_stack->next = node;
	return (1);
}

void	ft_add_front(t_stack **stack, t_stack *node)
{
	node->next = *stack;
	*stack = node;
}
