/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 09:55:53 by mcorda            #+#    #+#             */
/*   Updated: 2020/10/27 19:22:34 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ret;
	int *tmp;

	if (min >= max)
		return (0);
	ret = max - min;
	*range = (int*)malloc(sizeof(*tmp) * (max - min));
	if (!range)
		return (-1);
	tmp = *range;
	while (min < max)
		*tmp++ = min++;
	return (ret);
}
