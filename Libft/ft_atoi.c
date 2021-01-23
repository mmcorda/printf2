/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 13:31:20 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/23 15:26:53 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		nbr;
	int		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}
