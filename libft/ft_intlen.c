/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:11:27 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/13 14:12:31 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_intlen(int nbr)
{
	int	counter;

	if (nbr == 0)
		return (1);
	counter = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		counter++;
	}
	return (counter);
}
