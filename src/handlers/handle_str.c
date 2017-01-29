
#include <libft.h>
#include <wchar.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_str(char **format, va_list *args, t_arg *arg)
{
	char	*str;
	size_t	strlen;

	if (arg->length == l)
		return (ft_printf_handle_wstr(format, args, arg));
	else
	{
		str = va_arg(*args, char*);
		if (str == NULL)
			str = "(null)";
		strlen = arg->got_precision ? ft_nstrlen(str, arg->precision) :
				ft_strlen(str);
		if (arg->got_width && !arg->right_pad)
			ft_printf_width_pad(strlen, arg->width, arg->pad_zeroes ?
					'0' : ' ');
		ft_putnstr(str, strlen);
		if (arg->got_width && arg->right_pad)
			ft_printf_width_pad(strlen, arg->width, ' ');
		return (arg->got_width ? FT_MAX(strlen, arg->width) : strlen);
	}
}
