CC = cc
AR = ar
ARFLAGS = rcs
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ./ft_bzero.c \
	./ft_isalpha.c \
	./ft_isdigit.c \
	./ft_memcpy.c \
	./ft_memset.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_memmove.c \
	./ft_strlen.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

.o: .c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
