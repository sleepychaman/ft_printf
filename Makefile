
LIBFT_FUNS =	putchar_fd \
				putchar_fd \
				putstr_fd \
				putnbrbase_fd \
				putnstr_fd \
				putwchar_fd \
				memset \
				strchr \
				putstr \
				strlen \
				putnstr \
				bzero \
				isdigit \
				memalloc \
				putchar \
				max \
				tolower \
				nstrlen \
				putwchar \
				putnwstr \
				putnbrbase \

CFLAGS += $(foreach fun,$(LIBFT_FUNS),-Dft_$(fun)=ft_printf_libft_$(fun))

OBJS = $(patsubst src/%.c,obj/%.o,$(SRCS))
OBJS += $(foreach fun,$(LIBFT_FUNS),obj/libft/ft_$(fun).o)

CP = cp

RM = rm -f

all: $(NAME)

$(OBJS): | obj

obj:
	@mkdir -p $@
	@mkdir -p $@/handlers
	@mkdir -p $@/utils
	@mkdir -p $@/libft

obj/%.o: src/%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

obj/libft/%.o: libft/%.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $^

clean:
	$(RM) $(OBJS)

libfttest: $(NAME) obj/main.o
	$(CC) -o $@ obj/main.o -L. -lftprintf

fclean: clean
	$(RM) $(NAME)
	$(RM) -rf obj

re: fclean all

.PHONY: all clean fclean re
