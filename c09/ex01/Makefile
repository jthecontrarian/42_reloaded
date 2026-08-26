# compiler, flag, and name
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

# location of .c and .o files
SRCS = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)
INCS = includes

# build NAMEs
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
