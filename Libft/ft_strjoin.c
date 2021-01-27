/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcorda <mcorda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:12:27 by mcorda            #+#    #+#             */
/*   Updated: 2021/01/27 16:54:03 by mcorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		s1len;
	int		s2len;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(char *)s1 ? ft_strdup(s2) : ft_strdup(s1));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	if (!(newstr = (char *)malloc(sizeof(char ) * (s1len + s2len + 1))))
		return (NULL);
	ft_strlcpy(newstr, (char *)s1, s1len + 1);
	ft_strlcat(newstr + (s1len), s2, s2len + 1);
	return (newstr);
}
