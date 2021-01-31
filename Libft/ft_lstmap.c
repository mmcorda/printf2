/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 15:15:51 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/31 15:15:54 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*isworking;

	newlist = NULL;
	if (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (newlist)
		{
			lst = lst->next;
			while (lst)
			{
				if (!(isworking = ft_lstnew(f(lst->content))))
					ft_lstclear(&newlist, del);
				ft_lstadd_back(&newlist, isworking);
				lst = lst->next;
			}
		}
	}
	return (newlist);
}
