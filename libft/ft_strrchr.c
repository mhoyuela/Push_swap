/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:38:48 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:34:04 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*t;
	unsigned char	r;

	r = (char)c;
	t = (char *)s;
	i = ft_strlen (t);
	while (i >= 0)
	{
		if (t[i] == r)
		{
			return (&t[i]);
		}
		i--;
	}
	return (NULL);
}
/*int main()
{
	char s[] = "hello, wolrfd";
	int c = 'o';
	char *punt;

	punt = ft_strrchr(s, c);
	printf("%s", punt);
	return (0);
}*/
