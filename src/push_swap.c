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

#include "../pushlibft.h"

int	ft_count_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}

void	ft_free_stack(t_stack *stack)
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

void	ft_free_fredom(t_stack *stack_a, char **split)
{
	ft_sort_three(&stack_a);
	ft_free_matrix(split);
	ft_free_stack(stack_a);
	exit(0);
}

void	push_swap(t_stack *stack_a, t_stack *stack_b, char **split, int argc)
{
	int		len;

	ft_initvalue(&stack_a, split);
	ft_init_index(&stack_a);
	if (argc == 3)
		ft_free_fredom(stack_a, split);
	if (ft_is_ordered(stack_a))
	{
		ft_free_stack (stack_a);
		return ;
	}
	first_push(&stack_a, &stack_b);
	ft_sort_three(&stack_a);
	len = ft_stack_size(stack_b);
	while (len--)
	{
		set_cost(&stack_a, &stack_b);
		cheapest_move(&stack_a, &stack_b);
	}
	while (!ft_is_ordered(stack_a))
		ft_min_max(&stack_a);
	ft_free_stack(stack_a);
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
	if (ft_null_check(argv) == 0)
	{
		write (2, "Error\n", 6);
		return (1);
	}
	split = check_args(argc, argv);
	if (split && !split[0])
		return (write(2, "Error\n", 6), ft_free_matrix(split), 1);
	if (split)
		push_swap(stack_a, stack_b, split, ft_count_split(split));
	ft_free_matrix(split);
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
