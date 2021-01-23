/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:08:57 by mcorda            #+#    #+#             */
/*   Updated: 2020/10/28 18:41:54 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_findlen(int size, char **strs, char *sep)
{
	char	*tab;
	int		len;
	int		i;
	len = 1;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * size - 1;
	if (size <= 0)
		len = 1;
	if (!(tab = (char *)malloc(sizeof(char) * len)))
		return (0);
	return (tab);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*tab;
	tab = ft_findlen(size, strs, sep);
	k = 0;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			tab[k++] = strs[i][j];
		j++;
		}
		j = 0;
		while (sep[j] && i < size - 1)
		{
			tab[k++] = sep[j];
			j++;
		}
	}
	tab[k] = '\0';
	return (tab);
}
