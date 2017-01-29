
#include <libft.h>
#include <stdarg.h>
#include "ft_printf.h"

ssize_t	ft_printf_handle_float(char **format, va_list *args, t_arg *arg)
{
	float	nbr;

	(void)format;
	(void)arg;
	nbr = (float)va_arg(*args, double);
	(void)nbr;
	ft_putstr("Float");
	return (0);
}
