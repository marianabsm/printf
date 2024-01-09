/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:40:17 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:31:45 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long long int	nb;
	int				i;

	nb = n;
	i = 0;
	if (n < 0)
	{
		i += ft_putchar('-');
		nb = -nb;
	}
	if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	else
		i += ft_putchar(nb + 48);
	return (i);
}
