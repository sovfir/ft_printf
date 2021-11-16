/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:15:05 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/13 14:15:05 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	distance(unsigned long n, int base)
{
	int	index;

	index = 0;
	if (n == 0)
		index = 1;
	while (n > 0)
	{
		n = n / base;
		index ++;
	}
	return (index);
}

static char	*convert(unsigned long n, char *result, int base)
{
	int		len;

	len = distance(n, base);
	if (result == 0)
		return (0);
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		if (n % base > 9)
			result[--len] = (n % base) - 10 + 'a';
		else
			result[--len] = ((n % base) + '0');
		n = n / base;
	}
	return (result);
}

char	*ft_itobase(unsigned long n, int base)
{
	int		len;
	char	*result;

	len = distance(n, base);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == 0)
		return (0);
	result = convert(n, result, base);
	result[len] = '\0';
	return (result);
}
