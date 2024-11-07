/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:12:42 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:34:34 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	if (!s1)
		return (NULL);
	while (s1[start] != '\0' && ft_strrchr(set, s1[start]))
		start ++;
	end = ft_strlen(s1 + start);
	while (end && (ft_strrchr(set, s1[start + end - 1])))
	{
		end--;
	}
	return (ft_substr(s1, start, end));
}
/* int main()
{
	printf("%s", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " "));
	return (0);
} */