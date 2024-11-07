/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:29:55 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/04/20 19:24:17 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	i;

	i = 0;
	c = ft_strlen(src);
	if (dstsize == 0)
		return (c);
	while (i < (dstsize - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (c);
}
/*
int main()
{
	char dst[] = "helloeddddddddddddd";
	size_t c;

	c = ft_strlcpy(dst, "", 15);
	printf("%s\n", dst);
	return (0);
}*/
