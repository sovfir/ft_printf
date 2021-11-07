/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:08:13 by gjacinta          #+#    #+#             */
/*   Updated: 2021/10/17 15:08:16 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* функция присобачивающая функцию Ф к поступающей строке С*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if (s)
	{
		str = ft_strdup((const char *)s);
		if (str == NULL)
			return (NULL);
		i = 0;
		while (str[i] != 0)
		{
			str[i] = f((unsigned int)i, str[i]);
			i++;
		}
		return (str);
	}
	else
		return (NULL);
}
/*  ft_strdup  создает копию строки и возвращает пойнтер на нее, 
потом в цикле к каждой яйчейке мы применяем Ф*/
