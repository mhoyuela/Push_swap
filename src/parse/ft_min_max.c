/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 12:42:38 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-28 12:42:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../pushlibft.h"

int	ft_max2(int n1, int n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

int	ft_min2(int n1, int n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

int	ft_is_numeric(char *n)
{
	int	i;

	i = 0;
	if (n[i] == '-' || n[i] == '+')
		i++;
	while (n[i])
	{
		if (!ft_isdigit(n[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_ps(const char *str, char **split)
{
	int			i;
	long int	result;
	int			sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] <= '\r' && str[i] >= '\t') || (str[i] == ' '))
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (((sign * result) >= -2147483648) && ((sign * result) <= 2147483647))
		return (sign * result);
	else
		return (ft_free_split(split, 1), 0);
}
