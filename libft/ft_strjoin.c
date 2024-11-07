/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:27:05 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:29:17 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		s3[i] = (char)s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i] = (char)s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
/*int main()
{
	const char s1[] = "hola";
	const char s2[] = "adio";

	printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/