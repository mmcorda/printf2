/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:33:36 by mcorda            #+#    #+#             */
/*   Updated: 2020/10/28 19:41:41 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
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
	str[i] == '\0';
	return (str);
}
