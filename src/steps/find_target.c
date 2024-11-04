/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-02 17:01:06 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-10-02 17:01:06 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

t_stack	*find_target(t_stack **stack_a, t_stack *node_b)
{
	t_stack	*temp;
	t_stack	*target;
	int		aux;
	int		dif;

	temp = *stack_a;
	dif = 2147483647;
	while (temp)
	{
		aux = temp->value - node_b->value;
		if (aux > 0 && aux < dif)
		{
			target = temp;
			dif = aux;
		}
		temp = temp->next;
	}
	return (target);
}