/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:55:03 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/14 13:32:17 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "ft_printf.h"
# include <stdlib.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
int		ft_putstr(char *c);
int		ft_putpointer(void *ptr);
int		ft_putnbr(int nbr);
int		ft_putunsigned(unsigned int nbr);
int		ft_putpcnt(void);
int		ft_puthex(unsigned long decimalnbr);
int		ft_puthex_capital(unsigned long decimalnbr);
int		ft_intlen(int nbr);
int		ft_intlenbase(unsigned long nbr, int base);
char	*ft_itobase(unsigned long n, int base);
char	*ft_itobase_capital(unsigned long n, int base);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
size_t	ft_strlen(const char *str);

#endif
