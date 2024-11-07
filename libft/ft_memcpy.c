/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:40:02 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 17:06:34 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)

{
	size_t			i;
	unsigned char	*c;
	unsigned char	*r;

	i = 0;
	r = (unsigned char *)src;
	c = (unsigned char *)dst;
	if (dst == NULL && src == NULL && n != 0)
		return (NULL);
	while (i < n)
	{
		c[i] = r[i];
		i++;
	}
	return (c);
}
