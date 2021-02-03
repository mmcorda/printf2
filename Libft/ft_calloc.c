/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:58:21 by mcorda            #+#    #+#             */
/*   Updated: 2021/02/03 12:26:57 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	j;

	j = count * size;
	if (!(dest = malloc(j)))
		return (NULL);
	ft_bzero(dest, j);
	return (dest);
}
