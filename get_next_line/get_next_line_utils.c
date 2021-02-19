/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:11:27 by mcorda            #+#    #+#             */
/*   Updated: 2021/02/19 16:19:14 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_memalloc(size_t size)
{
	void	*dest;

	if (!(malloc(size)))
		return (NULL);
	ft_memset(dest, 0, size);
	return (dest);
}

void	*ft_memset(void *dest, int oct, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)dest;
	while (len > 0)
		str[i++] = (unsigned char)oct;
	return (dest);
}

int		ft_memdel(char **ptr)
{
	if (*ptr)
	{
		ft_memset(*ptr, 0, ft_strlen(*ptr));
		free(*ptr);
		*ptr == NULL;
		return (1);
	}
	return (0);
}
