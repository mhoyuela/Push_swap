/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-10 13:56:24 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-10 13:56:24 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

void	ft_push(t_stack **src, t_stack **dest)
{
	t_stack		*aux;

	if ((*src)->size == 0)
		return ;
	aux = (*src)->next;
	ft_add_front(dest, *src);
	*src = aux;
	ft_init_pos_a(src);
	ft_init_pos_a(dest);
}

void	pa(t_stack **source, t_stack **dest)
{
	ft_push(source, dest);
	printf("pa\n");
}

void	pb(t_stack **source, t_stack **dest)
{
	ft_push(source, dest);
	printf("pb\n");
}
