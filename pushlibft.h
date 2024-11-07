/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushlibft.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 17:07:37 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-10-28 17:07:37 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHLIBFT_H
# define PUSHLIBFT_H

# include "./libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int				max;
	int				min;
	int				pos_a;
	int				pos_f;
	int				cost_a;
	int				cost_b;
	int				cost_t;
	int				value;
	int				size;
	char			op_a;
	char			op_b;

	struct s_stack	*next;	
}	t_stack;

//moves
void	ft_push(t_stack **src, t_stack **dest);
void	pa(t_stack **source, t_stack **dest);
void	pb(t_stack **source, t_stack **dest);
void	ft_reverse_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	ft_swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);

//parse
int		ft_atoi_ps(const char *str, char **split);
char	*ft_join_arguments(int argc, char *argv[]);
int		ft_duplicate(t_stack *stack);
char	**check_args(int argc, char *argv[]);
int		ft_max2(int n1, int n2);
int		ft_min2(int n1, int n2);
int		ft_is_numeric(char *n);
int		ft_null_check(char *argv[]);

//steps
t_stack	*ft_cheapest(t_stack **stack_b);
void	cheapest_move(t_stack **stack_a, t_stack **stack_b);
void	execute_stack_a_operations(t_stack **stack_a, t_stack *node_b);
void	execute_stack_b_operations(t_stack **stack_b, t_stack *node_b);
void	comb_operations(t_stack **stack_a, t_stack **stack_b, t_stack *node_b);
void	set_cost(t_stack **stack_a, t_stack **stack_b);
void	cost_a(t_stack **stack_a, t_stack *node_b);
void	cost_a_next(t_stack **stack_a, t_stack *node_b, t_stack *target);
void	cost_b(t_stack **stack_b, t_stack *node_b);
void	cost_t(t_stack *node_b);
t_stack	*find_target(t_stack **stack_a, t_stack *node_b);
void	first_push(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_min(t_stack **stack);
t_stack	*ft_max(t_stack **stack);
void	ft_sort_three(t_stack **stack_a);
int		ft_stack_size(t_stack *a);

//utils
void	ft_free_matrix(char **split);
void	ft_free_split(char **split, int print);
int		ft_is_ordered(t_stack *stack);
void	ft_print_array(int	*array, int size);
int		*ft_sort_array(t_stack *stack, int *array, int size, int i);
void	ft_init_size(t_stack **stack);
void	ft_init_pos_a(t_stack **stack);
void	ft_init_index(t_stack **stack);
void	ft_init_pos_a2(t_stack **stack_a, t_stack **stack_b);
void	ft_initvalue(t_stack **stack, char *argv[]);
t_stack	*ft_new_node(int value);
int		ft_add_back(t_stack **stack, t_stack *node);
void	ft_add_front(t_stack **stack, t_stack *node);
void	ft_min_max(t_stack **stack_a);
int		ft_count_split(char **split);
void	ft_free_stack(t_stack *stack);

#endif