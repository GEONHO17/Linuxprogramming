#include "mylib.hpp" // 헤더 파일 선언

int main() { // 메인 함수 선언
    SmartTV htv;                //객체 생성 
    htv.setSmartTV(50, false, "192.0.0.2"); //설정 
    cout << "size=" << htv.getSize() << endl;   //메시지 출력 
    cout << "videoIn=" << boolalpha << htv.getVideoln() << endl;    //메시지 출력 
    cout << "IP=" << htv.getIpAddr() << endl;   //메시지 출력 
    return 0;               //0을 반환하고 함수 종료 
}                           //함수 끝 
