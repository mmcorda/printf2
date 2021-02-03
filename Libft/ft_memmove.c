/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 15:00:34 by mcorda            #+#    #+#             */
/*   Updated: 2021/02/03 12:21:47 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*lasts;
	unsigned char	*lastd;

	d = (unsigned char	*)dest;
	s = (unsigned char	*)src;
	if (d < s)
		return (ft_memcpy(dest, src, n));
	else
	{
		lasts = s + (n - 1);
		lastd = d + (n - 1);
		while (n-- && (dest || src))
			*lastd-- = *lasts--;
	}
	return (dest);
}
