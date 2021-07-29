/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 17:22:15 by mcorda            #+#    #+#             */
/*   Updated: 2021/07/29 19:32:42 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	convert_s(char *s, t_option *o, int i)
{
	if (s == NULL)
		s = "(null)";
	i = ft_putstr(s, o->dot, 0);
	if (o->dot > i || o->dot < 0)
		o->a_p = i;
	else
		o->a_p = o->dot;
	if (o->flag_minus == 0 && o->width > o->a_p)
	{
		if (o->flag_zero == 1 && o->dot != 0)
			padding(o->width - o->a_p, '0');
		else
			padding(o->width - o->a_p, ' ');
	}
	ft_putstr(s, o->a_p, 1);
	if (o->flag_minus > 0 && o->width > o->a_p)
		padding(o->width - o->a_p, ' ');
}

void	convert_di(int nb, t_option *o, int i)
{
	i = ft_putnbr_base(nb, set_base(o->type), 0);
	if (nb < 0)
		o->width = o->width - 1;
	else
		o->width = o->width;
	if (o->dot <= i || o->dot < 0)
		o->a_p = i;
	else
		o->a_p = o->dot;
	if (o->dot == 0 && nb == 0)
		o->a_p = 0;
	if (o->flag_minus == 0 && o->width > o->a_p)
	{
		if (o->flag_zero == 1 && o->dot < 0)
		{
			if (nb < 0)
				ft_putchar('-', 1);
			padding(o->width - o->a_p, '0');
		}
		else
			padding(o->width - o->a_p, ' ');
	}
	utils_di(nb, o, i);
}

void	convert_uxx(unsigned int nb, t_option *o, int i)
{
	i = ft_putnbr_base(nb, set_base(o->type), 0);
	if (o->dot > i)
		o->a_p = o->dot;
	else
		o->a_p = i;
	if (o->dot < 0)
		o->a_p = i;
	if (o->dot == 0 && nb == 0)
		o->a_p = 0;
	if (o->flag_minus == 0 && o->width > o->a_p)
	{
		if (o->flag_zero == 1 && o->dot < 0)
			padding(o->width - o->a_p, '0');
		else
			padding(o->width - o->a_p, ' ');
	}
	if (o->dot > i)
		padding(o->dot - i, '0');
	if (!(nb == 0 && o->dot == 0))
		ft_putnbr_base(nb, set_base(o->type), 1);
	if (o->flag_minus > 0 && o->width > o->a_p)
		padding(o->width - o->a_p, ' ');
}

void	convert_p(unsigned long int nb, t_option *o, int i)
{
	i = ft_putnbr_base(nb, set_base(o->type), 0);
	if (o->dot > i)
		o->a_p = o->dot;
	else
		o->a_p = i;
	if (o->dot < 0)
		o->a_p = i;
	if (o->flag_minus == 0 && o->width > o->a_p)
	{
		if (o->flag_zero == 1 && o->dot != 0)
			padding(o->width - (o->a_p + 2), '0');
		else
			padding(o->width - (o->a_p + 2), ' ');
	}
	ft_putstr("0x", -1, 1);
	if (o->flag_zero > 0 || o->dot > i)
		padding(o->dot - i, '0');
	ft_putnbr_base(nb, set_base(o->type), 1);
	if (o->flag_minus > 0 && o->width > o->a_p)
		padding(o->width - (o->a_p + 2), ' ');
}

void	convert_c_other(va_list args, t_option *o)
{
	if (o->flag_minus == 0)
	{
		if (o->flag_zero > 0)
			padding(o->width - 1, '0');
		else
			padding(o->width - 1, ' ');
	}
	if (o->type == 'c' && o->dot != 0)
		ft_putchar(va_arg(args, int), 1);
	else if (o->dot != 0)
		ft_putchar(o->type, 1);
	if (o->flag_minus == 1)
		padding(o->width - 1, ' ');
}
