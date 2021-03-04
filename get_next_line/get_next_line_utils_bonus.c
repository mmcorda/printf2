/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:24:17 by mcorda            #+#    #+#             */
/*   Updated: 2021/03/04 11:32:14 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *str)
{
	size_t		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strplusone(size_t size)
{
	return (ft_memalloc((size + 1) * sizeof(char)));
}

void		*ft_memalloc(size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}

void		*ft_memset(void *dest, int oct, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len--)
		*ptr++ = oct;
	return (dest);
}

int			ft_memdel(void **ptr)
{
	if (*ptr)
	{
		ft_memset(*ptr, 0, ft_strlen(*ptr));
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
