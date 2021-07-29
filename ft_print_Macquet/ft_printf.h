/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:51:19 by mcorda            #+#    #+#             */
/*   Updated: 2021/07/29 19:22:19 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_option
{
	int			flag_minus;
	int			flag_zero;
	int			width;
	int			dot;
	int			a_p;
	char		type;
}				t_option;

int			ft_printf(const char *format, ...);
void		utils_di(int nb, t_option *o, int i);
int			ft_putchar(char c, int on);
int			ft_putstr(char *str, int prec, int on);
int			ft_strlen(const char *s);
int			ft_intlen(long int n);
void		padding(int i, char c);
int			ft_atoi(const char *str);
int			ft_putnbr_base(long long nbr, char *base, int on);
int			ft_putptr_base(unsigned long int nbr, char *base, int on);
int			find_converter(char c, char *charset);
char		*set_base(char c);
void		analyze_flags(char *s, va_list args, t_option *o);
void		convert_s(char *s, t_option *o, int i);
void		convert_di(int nb, t_option *o, int i);
void		convert_uxx(unsigned int nb, t_option *o, int i);
void		convert_p(unsigned long int nb, t_option *o, int i);
void		convert_c_other(va_list args, t_option *o);
void		convert_type_format(t_option *o, va_list args);
char		*analyze_format(char *toformat, va_list args, t_option *o);
t_option	*ft_init_option(t_option *o);

#endif
