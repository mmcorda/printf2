/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 11:46:17 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/23 15:39:31 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)dest;
	while (i < len)
	{
		str[i] = (unsigned char)val;
		i++;
	}
	return (dest);
}
