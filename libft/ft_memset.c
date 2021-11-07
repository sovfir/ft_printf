/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:06:47 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/09 12:06:51 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*t;

	t = (char *)dest;
	while (count > 0)
	{
		t[count - 1] = c;
		count--;
	}
	return (dest);
}
