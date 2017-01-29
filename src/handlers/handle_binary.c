
#include <stdarg.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_binary(char **format, va_list *args, t_arg *arg)
{
	uintmax_t	nbr;

	(void)format;
	nbr = ft_printf_get_unsigned_from_length(args, arg);
	return (ft_printf_handle_uint(nbr, arg, "01", "0b"));
}
