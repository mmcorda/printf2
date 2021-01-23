/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 13:18:06 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/23 12:27:10 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*s1;

	s1 = (char *)dest;
	i = 0;
	while (i < len)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dest);
}
