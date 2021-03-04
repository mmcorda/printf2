/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:23:58 by mcorda            #+#    #+#             */
/*   Updated: 2021/03/04 12:04:25 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	ssize_t	i;

	str = ft_strplusone(ft_strlen(src));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		str[i] = src[i];
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != (char)c)
		if (!s[i++])
			return (NULL);
	return ((char *)&s[i]);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1len;
	int		s2len;

	s1len = 0;
	s2len = 0;
	if (s1 == NULL || s2 == NULL || !(new = (char *)malloc(ft_strlen(s1)
		+ ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[s1len] != '\0')
	{
		new[s1len] = s1[s1len];
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		new[s1len] = s2[s2len];
		s1len++;
		s2len++;
	}
	new[s1len] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!s || (long int)len < 0)
		return (NULL);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (start < ft_strlen(s) && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int		get_next_line(int fd, char **line)
{
	ssize_t		r;
	char		bf[BUFFER_SIZE + (r = 1)];
	static char	*lr[FD_SIZE];
	char		*tmp;

	if (fd < 0 || !line || fd >= 255 || BUFFER_SIZE <= 0)
		return (-1);
	lr[fd] == NULL ? lr[fd] = ft_strplusone(0) : NULL;
	while (!ft_strchr(lr[fd], '\n') && (r = read(fd, bf, BUFFER_SIZE)) > 0)
	{
		bf[r] = '\0';
		tmp = ft_strjoin(lr[fd], bf);
		ft_memdel((void *)&lr[fd]);
		lr[fd] = tmp;
	}
	if (r == 0)
		*line = ft_strdup(lr[fd]);
	else if (r > 0)
		*line = ft_substr(lr[fd], 0, (ft_strchr(lr[fd], '\n') - lr[fd]));
	else
		return (-1);
	tmp = ft_strdup(lr[fd] + (ft_strlen(*line) + ((r > 0) ? +1 : +0)));
	ft_memdel((void *)&lr[fd]);
	lr[fd] = tmp;
	return (r == 0 ? 0 * ft_memdel((void *)&lr[fd]) : 1);
}
