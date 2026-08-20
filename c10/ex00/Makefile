CC = cc
CFLAGS = -Wall -Wextra -Werror
TARGET = ft_display_file

CFILES = main.c
OFILES = main.o

all: $(TARGET)

$(TARGET): $(OFILES)
	$(CC) $(OFILES) -o $(TARGET)

$(OFILES): $(CFILES)
	$(CC) $(CFLAGS) -c $(CFILES) -o $(OFILES)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(TARGET)
