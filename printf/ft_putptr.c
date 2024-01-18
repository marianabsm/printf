/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcameira <jcameira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 15:26:53 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/18 14:59:09 by jcameira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long int n)
{
	if (!n)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_puthex(n, 's'));
}
