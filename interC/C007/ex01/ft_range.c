/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 15:41:36 by mcorda            #+#    #+#             */
/*   Updated: 2020/10/27 19:21:18 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int *tab;

	if (min >= max)
		return (NULL);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
		tab[i++] = min++;
	return (tab);
}
