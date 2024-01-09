/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:35:59 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:30:56 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 's'));
	else if (c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'b'));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, unsigned long int)));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int					i;
	unsigned long int	ret;
	va_list				args;

	i = 0;
	ret = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ret += ft_convert(str[++i], args);
			if (!str[i])
				break ;
		}
		else
			ret += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (ret);
}
