/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 16:14:32 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-30 16:14:32 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

int	ft_stack_size(t_stack *a)
{
	int		i;
	t_stack	*sublist;

	sublist = a;
	i = 0;
	while (sublist)
	{
		i++;
		sublist = sublist->next;
	}
	return (i);
}

void	first_push(t_stack **stack_a, t_stack **stack_b)
{
	int	len;

	(void)stack_b;
	len = ft_stack_size(*stack_a);
	while (len > 3)
	{
		pb(stack_a, stack_b);
		len--;
	}
}
