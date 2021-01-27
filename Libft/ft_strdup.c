/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 11:15:31 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/27 11:26:48 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		ok;
	char	*str;

	ok = 0;
	while (src[ok])
		ok++;
	str = (char*)malloc(sizeof(*str) * (ok + 1));
	i = 0;
	while (i < ok)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
