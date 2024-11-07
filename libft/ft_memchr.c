/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:08:16 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:57:49 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*r;

	i = 0;
	r = s;
	while (i < n)
	{
		if (r[i] == (unsigned char)c)
		{
			return ((void *)(r + i));
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s[] = "hello, wolrfd";
	int c = ',';
	char *punt;

	punt = ft_memchr(s, c, 9);
	printf("%s", punt);
	return (0);
	
}*/
