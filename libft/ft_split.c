/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:43:59 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/09 14:01:34 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	if (s[0] == '\0' || s[i] == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			count ++;
		}
		i++;
	}
	return (count +1);
}

static int	ft_lettercount(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != c && *s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

static void	freearray(char **str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		i;
	int		k;
	char	**r;

	i = 0;
	k = 0;
	r = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!r)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		j = 0;
		while (s[k] == c)
			k++;
		r[i] = (char *)malloc(sizeof(char) * (ft_lettercount(&s[k], c) + 1));
		if (!r[i])
			return (freearray(r, i), NULL);
		while (s[k] != c && s[k] != '\0')
			r[i][j++] = s[k++];
		r[i][j] = '\0';
		i++;
	}
	r[i] = NULL;
	return (r);
}
/* int main() 
{
    printf("prueba1\n");
	char const *s = "gfdhf   fghtyh";
	printf("%s\n", s);
    char c = ' ';
    //char *s = "hello!";
    //char c = ' ';
    char **str = ft_split(s, c);
    unsigned long i = 0;
    while (i < ft_wordcount(s, c))
    {
        printf("%s\n", str[i]);
        i++;
    }
		printf("\n\n\n");

		    printf("prueba1\n");
	    char const *s2 = "fghtyh";
		printf("%s2\n", s);
    
} */
/*char c2 = ' ';
    //char *s = "hello!";
    //char c = ' ';
    char **str2 = ft_split(s2, c2);
    unsigned long i2 = 0;
    while (i2 < ft_wordcount(s2, c2))
    {
        printf("%s\n", str[i2]);
        i2++;
    }
	printf("\n\n\n");

	    printf("prueba1\n");
	    char const *s3 = "   fdgs fghtyh";
		printf("%s\n", s3);
    char c3 = ' ';
    //char *s = "hello!";
    //char c = ' ';
    char **str3 = ft_split(s3, c3);
    unsigned long i3 = 0;
    while (i3 < ft_wordcount(s3, c3))
    {
        printf("%s\n", str3[i3]);
        i3++;
    }

	printf("\n\n\n");
	    printf("prueba1\n");
	    char const *s4 = "       ";
		printf("%s\n", s4);
    char c4 = ' ';
    //char *s = "hello!";
    //char c = ' ';
    char **str4 = ft_split(s4, c4);
    unsigned long i4 = 0;
    while (i4 < ft_wordcount(s4, c4))
    {
        printf("%s\n", str4[i4]);
        i4++;
    }

	printf("\n\n\n");

	    printf("prueba1\n");
		    char const *s5 = 0;
			printf("%s\n", s5);
    char c5 = 0;
    //char *s = "hello!";
    //char c = ' ';
    char **str5 = ft_split(s5, c5);
    unsigned long i5 = 0;
    while (i5 < ft_wordcount(s5, c5))
    {
        printf("%s\n", str5[i5]);
        i5++;
    }
    return (0);
}   */