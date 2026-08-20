# compiler, flag, and target name
CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a

# location of .c and .o files
SRCS = srcs/ft_putchar.c srcs/ft_strcmp.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(SRCS:.c=.o)

# build targets
all: $(TARGET)

$(TARGET): $(OBJS)
	ar rcs $(TARGET) $(OBJS)

%.o: %.c includes/ft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
