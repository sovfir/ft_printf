/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:54:14 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/14 13:38:52 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int nbr)
{
	int		index;
	char	*res;

	index = 0;
	res = ft_itobase(nbr, 10);
	ft_putstr(res);
	index = ft_strlen(res);
	free (res);
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
	char	*res;

	index = 0;
	res = ft_itobase(decimalnbr, 16);
	ft_putstr(res);
	index = ft_strlen(res);
	free (res);
	return (index);
}

int	ft_puthex_capital(unsigned long decimalnbr)
{
	int		index;
	char	*res;

	index = 0;
	res = ft_itobase_capital(decimalnbr, 16);
	ft_putstr(res);
	index = ft_strlen(res);
	free (res);
	return (index);
}
