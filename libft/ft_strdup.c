/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:40:49 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/11 16:40:52 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen((char *) s1) + 1;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, s1, len);
	return (tmp);
}
