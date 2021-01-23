/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:23:17 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/23 14:44:04 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	pos;

	pos = ft_strlen(s);
	if (s)
	{
		while (s[pos] != (char)c && pos >= 0)
			pos--;
		if (s[pos] == (char)c)
			return ((char*)&s[pos]);
		else
			return (NULL);
	}
	return (NULL);
}
