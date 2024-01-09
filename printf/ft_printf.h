/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marianamestre <marianamestre@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:43:03 by marianamest       #+#    #+#             */
/*   Updated: 2024/01/09 16:41:05 by marianamest      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define S_HEX "0123456789abcdef"
# define B_HEX "0123456789ABCDEF"

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);

int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_strlen(const char *s);
int	ft_convert(char c, va_list args);
int	ft_putchar(char c);
int	ft_putunsigned(unsigned int n);
int	ft_puthex(unsigned long int n, int c);
int	ft_putptr(unsigned long int n);
int	ft_putnbr_base(unsigned int n, char *base);

#endif
