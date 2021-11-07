/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:51:18 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/11 17:51:22 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int	start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (len > (ft_strlen(s) - start))
		str = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i] != '\0')
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
