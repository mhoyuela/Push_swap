/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-25 14:00:49 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-25 14:00:49 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

static char	*ft_join(char const *s1, char const *s2)
{
	char				*join;
	unsigned int		i;
	unsigned int		n;

	n = -1;
	i = -1;
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!join)
		return (NULL);
	if (!s1 && !s2)
	{
		free(join);
		return (NULL);
	}
	while (++i < ft_strlen(s1))
		join[i] = s1[i];
	join[i++] = ' ';
	while (++n < ft_strlen(s2))
		join[i++] = s2[n];
	join[i] = '\0';
	return (join);
}

char	*ft_join_arguments(int argc, char *argv[])
{
	int		i;
	char	*join;
	char	*temp;

	i = 1;
	join = ft_strdup(argv[i]);
	i++;
	while (i < argc)
	{
		temp = join;
		join = ft_join((const char *)join, argv[i]);
		free(temp);
		i++;
	}
	return (join);
}

int	ft_duplicate(t_stack *stack)
{
	t_stack	*comp;
	t_stack	*rest;

	comp = stack;

	while (comp)
	{
		rest = comp->next;
		while (rest)
		{
			if (comp->value == rest->value)
			{
				write(2, "Error\n", 6);
				exit (1);
			}
			rest = rest->next;
		}
		comp = comp->next;
	}
	return (0);
}

char	**check_args(int argc, char *argv[])
{
	char	*join;
	char	**split;
	int		i;
	int		n;

	i = 0;
	join = ft_join_arguments(argc, argv);
	split = ft_split((const char *)join, ' ');
	free(join);
	while (split[i])
	{
		n = ft_atoi_ps(split[i], split);
		if ((!ft_isdigit(split[i][0]) && split[i][0] != '-')
		|| (!ft_is_numeric(split[i]))
			|| (split[i][0] != '0' && !n))
			return (ft_free_split(split, 1), NULL);
		i++;
	}
	return (split);
}



/*dentro del bucle en la condicion Si ambos son verdaderos, (split[i][0] != 0 && !n)
significa que el string no es un número válido. 
Básicamente, evita aceptar cadenas no numéricas como "abc", 
que resultaría en n = 0 después de ft_atoi.*/