
#include "ft_printf.h"
#include <libft.h>

ssize_t	ft_printf_handle_long(char **format, va_list *args, t_arg *arg)
{
	arg->length = l;
	return (ft_printf_get_handler(ft_tolower(**format))(format, args, arg));
}
