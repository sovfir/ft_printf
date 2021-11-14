/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:36:40 by gjacinta          #+#    #+#             */
/*   Updated: 2021/11/14 13:33:13 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	counter;

	if (c == 'c')
		counter = ft_putchar(va_arg(args, int));
	if (c == 's')
		counter = ft_putstr(va_arg(args, char *));
	if (c == 'p')
		counter = ft_putpointer(va_arg(args, void *));
	if (c == 'd')
		counter = ft_putnbr(va_arg(args, int));
	if (c == 'i')
		counter = ft_putnbr(va_arg(args, int));
	if (c == 'u')
		counter = ft_putunsigned(va_arg(args, unsigned int));
	if (c == 'x')
		counter = ft_puthex(va_arg(args, unsigned int));
	if (c == 'X')
		counter = ft_puthex_capital(va_arg(args, unsigned int));
	if (c == '%')
		counter = ft_putpcnt();
	return (counter);
}

int	ft_printf(const char *s, ...)
{
	int		index;
	int		otvet;
	int		counter;
	va_list	args;

	va_start(args, s);
	otvet = 0;
	index = 0;
	counter = 0;
	while (s[index] != '\0')
	{
		if (s[index] != '%')
		{
			write(1, &s[index++], 1);
			otvet++;
		}
		else
		{
			index++;
			counter = ft_check(s[index++], args);
			otvet = otvet + counter;
		}
	}
	va_end(args);
	return (otvet);
}

/* va_list (vector argumment list) - указатель на аргументы
void va_start (va_list ap, last) - инициализация списка
аргументов, где last - последний фиксированный аргумент
type va_arg(va_list ap, type) взять очередной аргумент
типа type и передвинуть за него указатель ap
void va_end(va_list ap) - конец обработки списка параметров */