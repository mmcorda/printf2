/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 11:11:34 by mcorda            #+#    #+#             */
/*   Updated: 2021/03/04 11:22:04 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4000
# endif

char		*ft_strchr(const char *s, int c);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strdup(const char *src);
size_t		ft_strlen(const char *str);
char		*ft_strplusone(size_t size);
void		*ft_memalloc(size_t size);
void		*ft_memset(void *dest, int oct, size_t len);
int			ft_memdel(void **ptr);
int			get_next_line(int fd, char **line);

#endif
