/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:22:55 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:31:38 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long int n, int c)
{
	char	*base;

	if (c == 's')
		base = S_HEX;
	else
		base = B_HEX;
	if (n < 16)
		return (ft_putchar(base[n]));
	else
		return (ft_puthex(n / 16, c) + ft_putchar(base[n % 16]));
}
