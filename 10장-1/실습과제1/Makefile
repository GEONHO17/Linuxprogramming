#컴파일러 지정 
CC = g++
#컴파일 옵션 설정 	 	
CFLAGS = -g -Wall
#컴파일할 소스 파일 목록 
SRCS = main.cpp
#실행 파일 이름 
TARGET = result
#실행파일을 만들기위한 규칙 
$(TARGET) : $(SRCS)	
		$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)
#clean 파일이 아닌 명렁어라는 것을 의미 
.PHONY: clean
#clean 입력시 실행파일과 오브젝트 파일 삭제 
clean :	
		rm $(TARGET)
