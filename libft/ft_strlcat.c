/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:18:14 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/04/20 19:17:59 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;
	size_t	n;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dest_len;
	j = 0;
	if (dstsize <= dest_len)
		n = src_len + dstsize;
	else
		n = dest_len + src_len;
	if (dstsize == 0)
		return (src_len);
	while (i < (dstsize - 1) && src[j] != '\0')
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (n);
}
/*
int main()
{
	char src[12] = "hola";
	char dst[24] = "caracalo";
	unsigned long c;
	
	c = ft_strlcat(dst, src, 4);
	printf("%s", dst);
	printf("%lu", c);
	return (0);
}*/
