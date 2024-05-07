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

#endif