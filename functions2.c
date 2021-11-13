/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:54:14 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/13 14:54:40 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunsigned(unsigned int nbr)
{
	int		index;
	char	*result;

	index = 0;
	result = ft_itobase(nbr, 10);
	ft_putstr(result);
	index = ft_strlen(result);
	free (result);
	return (index);
}

int	ft_putpcnt(void)
{
	ft_putchar('%');
	return (1);
}

int	ft_puthex(unsigned long decimalnbr)
{
	int		index;
	char	*result;

	index = 0;
	result = ft_itobase(decimalnbr, 16);
	ft_putstr(result);
	index = ft_strlen(result);
	free (result);
	return (index);
}

int	ft_puthex_cap(unsigned long decimalnbr)
{
	int		index;
	char	*result;

	index = 0;
	result = ft_itobase_cap(decimalnbr, 16);
	ft_putstr(result);
	index = ft_strlen(result);
	free (result);
	return (index);
}
