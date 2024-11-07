/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:57:25 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/07 18:17:29 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/* int main()
{
	t_list *s1;
	t_list s2;
	t_list s3;
	s1->content = "massabe";
	s2.content = "perrozanche";
	s3.content = "porperro q porzanche";
	s1->next = &s2;
	s2.next = &s3;
	s3.next = NULL;
	printf("%s", ft_lstlast(s1)->content);
	return (0);
} */