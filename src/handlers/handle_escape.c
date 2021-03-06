
#include "ft_printf.h"
#include <libft.h>

ssize_t	ft_printf_handle_escape(char **format, va_list *args, t_arg *arg)
{
	(void)format;
	(void)args;
	(void)arg;
	if (arg->got_width && !arg->right_pad)
		ft_printf_width_pad(1, arg->width, arg->pad_zeroes ? '0' : ' ');
	ft_putchar('%');
	if (arg->got_width && arg->right_pad)
		ft_printf_width_pad(1, arg->width, ' ');
	return (arg->got_width ? ft_max(arg->width, 1) : 1);
}
