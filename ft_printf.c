/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joafaust <joafaust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:39:50 by joafaust          #+#    #+#             */
/*   Updated: 2024/05/07 16:39:50 by joafaust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *, ...);

int	conversions(const char *str, va_list p)
{
	int	ret;
	int	c;

	ret = 0;
	c = 0;
	if (*str == 'c')
	{
		c = va_arg(p, int);
		ret += write(1, &c, 1);
	}
	else if (*str == 's')
		ret += ft_putstr(va_arg(p, char *));
	else if (*str == 'd' || *str == 'i')
		ret += ft_putdigit(va_arg(p, int), 10, DECIMAL);
	else if (*str == 'u')
		ret += ft_putdigit(va_arg(p, unsigned int), 10, DECIMAL);
	else if (*str == 'x')
		ret += ft_putdigit(va_arg(p, unsigned int), 16, HEXA);
	else if (*str == 'X')
		ret += ft_putdigit(va_arg(p, unsigned int), 16, HEXA2);
	else if (*str == 'p')
		ret += ft_putpointer(va_arg(p, unsigned long int), 1, HEXA);
	else if (*str == '%')
		ret += write(1, "%%", 1);
	return (ret);
}
