/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:00:44 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/09 13:00:47 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	tmp_dest = (char *) dest;
	tmp_src = (const char *) src;
	while (n--)
		*tmp_dest++ = *tmp_src++;
	return (dest);
}
