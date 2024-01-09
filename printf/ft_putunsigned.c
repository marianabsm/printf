/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:19:07 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:32:03 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n > 9)
	{
		i += ft_putunsigned(n / 10);
		i += ft_putunsigned(n % 10);
	}
	else
		i += ft_putchar(n + 48);
	return (i);
}
