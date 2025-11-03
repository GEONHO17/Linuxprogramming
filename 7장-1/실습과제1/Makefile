CC = g++
CFLAGS = -g -Wall
OBJS = main.o Mylib.o
TARGET = sum
$(TARGET) : $(OBJS)
				$(CC) -o $(TARGET) $(OBJS)
main.o : main.cpp Mylib.h
			$(CC) $(CFLAGS) -c main.cpp
Mylib.o : Mylib.cpp Mylib.h
			$(CC) $(CFLAGS) -c Mylib.cpp
.PHONY: clean
clean :
		rm $(TARGET) $(OBJS)
