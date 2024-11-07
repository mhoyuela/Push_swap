/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:20:09 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:23:23 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countletter(signed long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i += 1;
		n = n * -1;
	}
	while (n > 0)
	{
		i++;
		n = (n / 10);
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*r;
	long int		i;
	signed long int	x;

	x = (signed long int)n;
	i = ft_countletter(x);
	r = (char *)malloc((ft_countletter(n) + 1) * sizeof (char));
	if (!r)
		return (NULL);
	if (x < 0)
	{
		r[0] = '-';
		x = x * -1;
	}
	if (x == 0)
		r[0] = '0';
	while (x > 0)
	{
		i--;
		r[i] = x % 10 + '0';
		x /= 10;
	}
	x = (signed long int)n;
	r[ft_countletter(x)] = '\0';
	return (r);
}

/*   int main()
{
	printf("%s", ft_itoa(-2147483648));
	return (0);
}   */