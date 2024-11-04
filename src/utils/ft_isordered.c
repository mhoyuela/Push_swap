/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isordered.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 14:44:53 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-30 14:44:53 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

int	ft_is_ordered(t_stack *stack)
{
	int		n;
	t_stack	*sublist;

	sublist = stack;
	while (sublist->next)
	{
		n = sublist->value;
		if (n > sublist->next->value)
			return (0);
		sublist = sublist->next;
	}
	return (1);
}