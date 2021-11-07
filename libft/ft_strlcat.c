/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:39:14 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/09 14:39:17 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		len;

	d = dst;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	len = d - dst;
	n = size - len;
	if (n == 0)
		return (len + ft_strlen((char *) s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (len + (s - src));
}
