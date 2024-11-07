/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-30 13:44:23 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-30 13:44:23 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"

void	ft_free_split(char **split, int print)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	if (print)
		write(2, "Error\n", 6);
	exit (1);
}

void	ft_free_matrix(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		split[i] = NULL;
		i++;
	}
	free(split);
	split = NULL;
}

void	ft_free_stack_b(t_stack *stack)
{
	t_stack	*aux;
	t_stack	*temp;

	aux = stack;
	while (aux)
	{
		temp = aux;
		aux = aux->next;
		free(temp);
	}
	stack = NULL;
}
