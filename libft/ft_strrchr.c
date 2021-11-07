/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 15:04:34 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/09 15:04:37 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = 0;
	if (c > 256)
		c -= 256;
	while (s[i])
	{
		if (s[i] == c)
			str = (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		str = (char *)(s + i);
	return (str);
}
