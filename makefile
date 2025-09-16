CC = gcc
CFLAGS = -Wall -g
TARGET = app

#source and object files
SRCS = main.c src/calender.c
OBJS = $(SRCS:.c =.o)

#rules for creating the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

#rule for creating object files
%.o: %.c inc/calender.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)

