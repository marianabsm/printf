/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:26:53 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:31:51 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int n)
{
	if (!n)
		return (ft_putstr("(nill)"));
	else
		return (ft_putstr("0x") + ft_puthex(n, 's'));
}
