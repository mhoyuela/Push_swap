/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initvalue.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-02 13:57:11 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-02 13:57:11 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pushlibft.h"
#include <stdio.h>

void	ft_init_size(t_stack **stack)
{
	int		i;
	t_stack	*aux;

	i = 0;
	aux = *stack;
	while (aux)
	{
		i++;
		aux = aux->next;
	}
	aux = *stack;
	while (aux)
	{
		aux->size = i;
		aux = aux->next;
	}
}

void	ft_init_pos_a(t_stack **stack)
{
	int		i;
	t_stack	*nodo;

	i = 0;
	nodo = *stack;
	while (nodo)
	{
		nodo->pos_a = i;
		nodo = nodo->next;
		i++;
	}
}

void	ft_init_index(t_stack **stack)
{
	t_stack	*nodo;
	int		i;
	int		*array;

	array = malloc((*stack)->size * sizeof(int));
	array = ft_sort_array(*stack, array, (*stack)->size, -1);
	i = 0;
	nodo = *stack;
	while (nodo)
	{
		i = 0;
		while (i < (*stack)->size)
		{
			if (nodo->value == array[i])
				nodo->pos_f = i;
			i++;
		}
		nodo = nodo->next;
	}
}

void	ft_init_pos_a2(t_stack **stack_a, t_stack **stack_b)
{
	ft_init_pos_a(stack_a);
	ft_init_pos_a(stack_b);
}

void	ft_initvalue(t_stack **stack, int argc, char *split[])
{
	int		i;
	t_stack	*node;

	(void)argc;
	i = 0;
	while (split[i])
	{
		node = ft_new_node(ft_atoi(split[i]));
		ft_add_back(stack, node);
		node->pos_a = i;
		i++;
	}
	ft_duplicate(*stack);
	ft_init_size(stack);
}

/*hemos recorrido todos los argumentos
, hemos creado los nuevos nodos 
y añadido el valor del argumento
 al nuevo nodo.
Despues hemos 
añadido cada nodo al final
de la pila y con la iteracion hemos 
actualizado la posiciond de cada nodo*/