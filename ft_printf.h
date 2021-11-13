/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:55:03 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/13 14:55:26 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);

int	ft_putchar(char c);
int	ft_putstr(char *c);
int	ft_putptr(void *ptr);
int	ft_putnbr(int nbr);
int	ft_putunsigned(unsigned int nbr);
int	ft_putpcnt(void);
int	ft_puthex(unsigned long decimalnbr);
int	ft_puthex_cap(unsigned long decimalnbr);

#endif
