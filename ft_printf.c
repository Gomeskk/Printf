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

int ft_printf(const char *, ...)
{

}

int	conversions(const char *str, va_list p)
{
	int	retn;
	int	i;

	retn = 0;
	i = 0;
	if (*str == 'c')
	{
		i = va_arg(p, int);
		retn += write(1, &i, 1);
	}
	else if (*str == 's')
		retn += ft_putstr(va_arg(p, char *));
	else if (*str == 'd' || *str == 'i')
		retn += ft_putdigit(va_arg(p, int), 10, DECIMAL);
	else if (*str == 'u')
		retn += ft_putdigit(va_arg(p, unsigned int), 10, DECIMAL);
	else if (*str == 'x')
		retn += ft_putdigit(va_arg(p, unsigned int), 16, HEXA);
	else if (*str == 'X')
		retn += ft_putdigit(va_arg(p, unsigned int), 16, HEXA2);
	else if (*str == 'p')
		retn += ft_putpointer(va_arg(p, unsigned long int), 1, HEXA);
	else if (*str == '%')
		retn += write(1, "%%", 1);
	return (retn);
}

int	ft_putdigit(long long int n, int base, char	*bstr)
{
	int		ret;

	ret = 0;
	if (n < 0 && base == 10)
	{
		ret += write(1, "-", 1);
		n *= -1;
	}
	if (n >= base)
		ret += ft_putdigit(n / base, base, bstr);
	ret += write(1, &bstr[n % base], 1);
	return (ret);
}