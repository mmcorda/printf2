/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:19:33 by mcorda            #+#    #+#             */
/*   Updated: 2021/07/29 19:24:56 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	utils_di(int nb, t_option *o, int i)
{
	if (nb < 0 && !(o->width > o->a_p && o->flag_zero == 1
			&& o->dot < 0 && o->flag_minus == 0))
		ft_putchar('-', 1);
	if (o->a_p > i)
		padding(o->a_p - i, '0');
	if (!(nb == 0 && o->dot == 0))
		ft_putnbr_base(nb, set_base(o->type), 1);
	if (o->flag_minus > 0 && o->width > o->a_p)
		padding(o->width - o->a_p, ' ');
}
