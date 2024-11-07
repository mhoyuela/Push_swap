/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:52:16 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:35:02 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*r;

	i = 0;
	r = NULL;
	if (start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len < ft_strlen(s) - start)
		r = (char *)malloc(len + 1);
	else
	{
		r = (char *)malloc(ft_strlen(s) - start + 1);
		len = ft_strlen(s) - start;
	}
	if (!r)
		return (NULL);
	while ((i < len) && (s[i] != '\0'))
	{
		r[i] = s[i + start];
		i++;
	}
	r[i] = '\0';
	return (r);
}

/* int main()
{
	char const s[] = "beti";

	printf("%s", ft_substr(s, 2, 3));
	return (0);
} */
