
#include <stdarg.h>
#include <libft.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_char(char **format, va_list *args, t_arg *arg)
{
	(void)format;
	if (arg->length == l)
		return (ft_printf_handle_wchar(format, args, arg));
	else
	{
		if (arg->got_width && !arg->right_pad)
			ft_printf_width_pad(1, arg->width, arg->pad_zeroes ? '0' : ' ');
		ft_putchar(va_arg(*args, int));
		if (arg->got_width && arg->right_pad)
			ft_printf_width_pad(1, arg->width, ' ');
		return (arg->got_width ? ft_max(arg->width, 1) : 1);
	}
}
