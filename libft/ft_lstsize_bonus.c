/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 16:00:20 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:25:40 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* int main()
{
	t_list *st1;
	t_list st2;
	t_list st3;
	st1->content = "Hola ";
	st2.content = "ke ";
	st3.content = "paza ";
	st1->next = &st2;
	st2.next = &st3;
	st3.next = NULL;
	printf("tamaño lista: %i\n", ft_lstsize(st1));
	return (0);
 } */