/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-02 13:23:32 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-02 13:23:32 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/home/mhoyuela/Desktop/push_swap_manu/pushlibft.h"
#include <stdio.h>

void	push_swap(t_stack *stack_a, t_stack *stack_b, char **split, int argc)
{
	int		len;

	ft_initvalue(&stack_a, argc, split);
	ft_init_index(&stack_a);
	first_push(&stack_a, &stack_b);
	ft_sort_three(&stack_a);
	len = ft_stack_size(stack_b);
	while (len)
	{
		set_cost(&stack_a, &stack_b);
		cheapest_move(&stack_a, &stack_b);
		len--;
	}
	while (!ft_is_ordered(stack_a))
	{
		if (ft_min(&stack_a)->pos_a <= ft_stack_size(stack_a) / 2)
			ra(&stack_a);
		else
			rra(&stack_a);
	}
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	char	**split;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (1);
	split = check_args(argc, argv);
	if (split && !split[0])
		return (write(2, "Error\n", 6), 1);
	if (split)
		push_swap(stack_a, stack_b, split, argc);
}

/* int main(int argc, char *argv[])
{
    t_stack *a;
    t_stack *b;
    t_stack *node;
    int i;
    int size;
    a = NULL;
    b = NULL;
    i = 1;
    while(argv[i])
    {
        node = ft_lstnew(ft_atoll(argv[i]));
        ft_lstadd_back(&a, node);
        i++;
    }
    size = ft_lstsize(a);
    ft_init_pos_a(&a);
    ft_init_index(&a);
    print_stack(&a, "A");
    print_stack(&b, "B\n");
    first_push(&a, &b);
    sort_three(&a);
    //target(&a, &b, size);
   // cost_a(&a, &b);
    //cost_b(&b);
    print_stack(&a, "A");
    print_stack(&b, "B");
} */
