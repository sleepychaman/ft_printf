
#include <stdarg.h>
#include <libft.h>
#include <stdint.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_ptr(char **format, va_list *args, t_arg *arg)
{
	char		*base;
	uintmax_t	nbr;

	(void)format;
	arg->length = z;
	if (arg->got_precision)
		arg->pad_zeroes = 0;
	base = "0123456789abcdef";
	nbr = ft_printf_get_unsigned_from_length(args, arg);
	return (ft_printf_nbrforceprefix(nbr, base, arg, "0x"));
}
