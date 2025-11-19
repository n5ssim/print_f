NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.
AR = ar rcs
RM = rm -f

SRC = ft_printf.c \
	parsing/parse_format.c \
	conversions/print_char.c \
	conversions/print_string.c \
	conversions/print_pointer.c \
	conversions/print_decimal.c \
	conversions/print_unsigned.c \
	conversions/print_hex_lower.c \
	conversions/print_hex_upper.c \
	conversions/print_percent.c \
	utils/ft_putchar.c \
	utils/ft_putstr.c \
	utils/ft_putnbr.c \
	utils/ft_putunsigned.c \
	utils/ft_putptr.c \
	utils/ft_puthex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

ft_printf.o: ft_printf.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

parsing/%.o: parsing/%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

conversions/%.o: conversions/%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

utils/%.o: utils/%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
