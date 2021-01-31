/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 13:11:20 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/31 14:39:02 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	ft_lstlast(*alst)->next = new;
}
