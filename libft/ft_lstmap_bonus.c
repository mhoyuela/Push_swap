/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:23:12 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:25:21 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*buffer;
	t_list	*newlst;
	t_list	*nodo;
	void	*contenido;

	newlst = 0;
	buffer = lst;
	while (buffer)
	{
		contenido = f(buffer->content);
		nodo = ft_lstnew(contenido);
		if (!nodo)
		{
			ft_lstdelone(newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, nodo);
		buffer = buffer->next;
	}
	return (newlst);
}
