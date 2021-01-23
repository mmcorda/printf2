/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 11:02:36 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/23 17:16:19 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>

int		ft_isprint(int c);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
void	*ft_memset(void *dest, int val, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int n);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	ft_bzero(void *m, size_t len);
void	*ft_calloc(size_t count, size_t size);

#endif
