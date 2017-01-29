
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <inttypes.h>
# include <stdarg.h>
# include <stdint.h>
# include <sys/types.h>

typedef struct				s_arg
{
	int				force_prefix : 1;
	int				pad_zeroes : 1;
	int				right_pad : 1;
	int				force_sign : 1;
	int				blank_sign : 1;
	int				got_width : 1;
	int				got_precision : 1;
	unsigned int			width;
	unsigned int			precision;
	enum {
		none,
		hh,
		h,
		l,
		ll,
		j,
		z
	}				length;
}					t_arg;
typedef ssize_t			(*t_handler)(char**, va_list*, t_arg*);
int				ft_printf(const char *format, ...);

ssize_t				ft_printf_handle_escape(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_str(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_wstr(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_ptr(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_int(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_long(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_octal(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_unsigned(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_hex(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_char(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_wchar(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_null(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_binary(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_float(char **format, va_list *args,
		t_arg *arg);
ssize_t				ft_printf_handle_charswritten(char **format, va_list *a,
		t_arg *arg);
ssize_t				ft_printf_handle_uint(uintmax_t nbr, t_arg *arg, char *b,
		char *p);
t_handler			ft_printf_get_handler(char c);
char				*ft_printf_parse_flags(char **format, t_arg *arg);
char				*ft_printf_parse_width(char **format, va_list *list, t_arg *arg);
char				*ft_printf_parse_precision(char **format, va_list *list, t_arg *arg);
char				*ft_printf_parse_length(char **format, t_arg *arg);
uintmax_t			ft_printf_get_unsigned_from_length(va_list *args, t_arg *arg);
void				ft_printf_width_pad(int nbrstrlen, int width, char padwith);
unsigned int			ft_printf_nbrlen(uintmax_t nbr, char *base);
unsigned int			ft_printf_calc_nbrstrlen(uintmax_t nbr, char *base, char *p,
		t_arg *arg);
ssize_t				ft_printf_nbrforceprefix(uintmax_t n, char *b, t_arg *a,
		char *p);
#endif
