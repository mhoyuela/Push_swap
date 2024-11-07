/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:46:10 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:59:29 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*r;
	unsigned char	*v;

	i = 0;
	r = (unsigned char *)s1;
	v = (unsigned char *)s2;
	while (i < n)
	{
		if (r[i] != v[i])
		{
			return (r[i] - v[i]);
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char s1[] = "lana";
	char s2[] = "lano";

	printf("%d", ft_memcmp(s1, s2, 5));
	return(0);
}*/
