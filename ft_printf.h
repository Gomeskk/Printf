#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# ifndef DECIMAL
#  define DECIMAL "0123456789"
# endif
# ifndef HEXA
#  define HEXA "0123456789abcdef"
# endif
# ifndef HEXA2
#  define HEXA2 "0123456789ABCDEF"
# endif

int	ft_printf(const char *str, ...);
int	conversions(const char *str, va_list p);
int	ft_putdigit(long long int n, int base, char	*bstr);
int	ft_putstr(char *s);
int	ft_putpointer(unsigned long int n, int flag, char	*basestr);

#endif