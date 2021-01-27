/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:32:03 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/27 15:20:32 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t				i;
	unsigned char		*s10;
	unsigned char		*s20;

	i = 0;
	s10 = (unsigned char *)s1;
	s20 = (unsigned char *)s2;
	while ((s10[i] || s20[i]) && i < len)
	{
		if (s10[i] != s20[i])
			return (s10[i] - s20[i]);
		i++;
	}
	return (0);
}
