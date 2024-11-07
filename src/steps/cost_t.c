/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost_t.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-03 19:48:37 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-11-03 19:48:37 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

static int	ft_max_int(int a, int b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

void	cost_t(t_stack *node_b)
{
	if (node_b->op_a == node_b->op_b)
		node_b->cost_t = ft_max_int(node_b->cost_a, node_b->cost_b);
	else
		node_b->cost_t = node_b->cost_a + node_b->cost_b;
}
