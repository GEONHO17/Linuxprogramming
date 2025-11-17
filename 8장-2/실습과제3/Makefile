#컴파일러 지정 
CC = g++
#컴파일 옵션 설정 	 	
CFLAGS = -g -Wall
#오브젝트 파일 목록 
OBJS = main.o mylib.o
#실행 파일 이름 
TARGET = result
#실행파일을 만들기위한 규칙 
$(TARGET) : $(OBJS)	
			$(CC) -o $(TARGET) $(OBJS)
#main.cpp 컴파일해서 main.o 생성 
main.o : main.cpp mylib.hpp
			$(CC) $(CFLAGS) -c main.cpp
#mylib.cpp 컴파일해서 mylib.o 생성 
mylib.o : mylib.cpp mylib.hpp
			$(CC) $(CFLAGS) -c mylib.cpp
#clean 파일이 아닌 명렁어라는 것을 의미 
.PHONY: clean
#clean 입력시 실행파일과 오브젝트 파일 삭제 
clean :	
		rm $(TARGET) $(OBJS)
