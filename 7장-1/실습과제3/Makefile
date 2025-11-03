CC = g++
CFLAGS = -g -Wall
OBJS = main.o mylib.o
TARGET = sum
$(TARGET) : $(OBJS)
				$(CC) -o $(TARGET) $(OBJS)
main.o : main.cpp mylib.hpp
			$(CC) $(CFLAGS) -c main.cpp
mylib.o : mylib.cpp mylib.hpp
			$(CC) $(CFLAGS) -c mylib.cpp
.PHONY: clean
clean :
		rm $(TARGET) $(OBJS)
