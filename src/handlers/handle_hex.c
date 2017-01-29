
#include <stdarg.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_hex(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbr;

	nbr = ft_printf_get_unsigned_from_length(args, arg);
	if (**format == 'X')
		return (ft_printf_handle_uint(nbr, arg, "0123456789ABCDEF", "0X"));
	else
		return (ft_printf_handle_uint(nbr, arg, "0123456789abcdef", "0x"));
}
