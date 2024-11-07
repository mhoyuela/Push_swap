/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:06:25 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:28:45 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h> 
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	char			*t;
	unsigned char	r;

	r = (char)c;
	t = (char *)s;
	i = 0;
	if (r == 0)
		return (&t[ft_strlen(s)]);
	while (t[i] != '\0')
	{
		if (t[i] == r)
		{
			return (&t[i]);
		}
		i++;
	}
	if (r == '\0' || c == 1024)
		return (&t[i]);
	return (NULL);
}
/*
int main()
{
	char s[] = "hello, wolrfd";
	int c = '\0';
	char *punt;

	punt = ft_strchr(s, c);
	printf("%s", punt);
	return (0);
}*/
