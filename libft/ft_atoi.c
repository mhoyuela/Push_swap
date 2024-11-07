/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:35:43 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/04/20 18:09:56 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
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
		return (0);
}
/*int main()
{
	char str[] = "-12-34";
	
	printf("%d", ft_atoi(str));
	return(0);
}*/
