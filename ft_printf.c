/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:36:40 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/07 18:24:38 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	count;

	if (c == 'c')
		count = ft_putchar(va_arg(args, int));
	if (c == 's')
		count = ft_putstr(va_arg(args, char *));
	if (c == 'p')
		count = ft_putptr(va_arg(args, void *));
	if (c == 'd')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'i')
		count = ft_putnbr(va_arg(args, int));
	if (c == 'u')
		count = ft_putunsigned(va_arg(args, unsigned int));
	if (c == 'x')
		count = ft_puthex(va_arg(args, unsigned int));
	if (c == 'X')
		count = ft_puthex_cap(va_arg(args, unsigned int));
	if (c == '%')
		count = ft_putpcnt();
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		index;
	int		returnvalue;
	int		count;
	va_list	args;

	va_start(args, s);
	returnvalue = 0;
	index = 0;
	count = 0;
	while (s[index] != '\0')
	{
		if (s[index] != '%')
		{
			write(1, &s[index++], 1);
			returnvalue++;
		}
		else
		{
			index++;
			count = ft_check(s[index++], args);
			returnvalue = returnvalue + count;
		}
	}
	va_end(args);
	return (returnvalue);
}

/* va_list (vector argumment list) - указатель на аргументы
void va_start (va_list ap, last) - инициализация списка
аргументов, где last - последний фиксированный аргумент
type va_arg(va_list ap, type) взять очередной аргумент
типа type и передвинуть за него указатель ap
void va_end(va_list ap) - конец обработки списка параметров */