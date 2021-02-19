/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:11:34 by mcorda            #+#    #+#             */
/*   Updated: 2021/02/19 15:34:43 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "stdio.h"
# include "stdlib.h"
# include "unistd.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned start, size_t len);
char	*ft_strdup(const char *src);
int		ft_strlen(const char *str);
char	*ft_memalloc(size_t size);
void	*ft_memset(void *dest, int oct, size_t len);
int		ft_memdel(char **ptr);
int		get_next_line(int fd, char **line);

#endif
