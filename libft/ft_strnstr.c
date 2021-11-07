/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:53:59 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/11 15:54:04 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
	{
		return ((char *)haystack);
	}
	j = 0;
	while (j <= len && haystack[j])
	{
		i = 0;
		while (needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			i++;
			j++;
			if (j > len)
				return (NULL);
		}
		if (needle[i] == '\0')
		{
			return ((char *) &haystack[j - i]);
		}
		j = j - i + 1;
	}
	return (NULL);
}
