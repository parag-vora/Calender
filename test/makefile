CC = g++
CFLAGS = -Wall -g
TARGET = mytest

#source and object files
SRCS = mytest.cpp test.cpp
OBJS = $(SRCS:.c = .o)

#rules for creating the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) -lgtest -lgtest_main -lpthread

#rule for creating object files
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o $(TARGET)
