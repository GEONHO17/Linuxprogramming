#include "mylib.hpp" // 헤더 파일 선언

    TV::TV() : size(0) { // 생성자 초기화
        cout << "TV 생성" << endl;  //메시지 출력 
    }                       //생성자 끝 
    void TV::setSize(int s) {   //크기 설정 함수 
        size = s;               //s로 초기화 
    }                           //함수 끝 
    int TV::getSize() {         //반환 함수 
        return size;            //크기 반환 
    }                           //함수 끝 
    WideTV::WideTV() : videoln(false) { //false로 초기화
        cout << "WideTV 생성" << endl;  //메시지 출력 
    }                           //함수 끝 

    void WideTV::setVideoln(bool v) {   //설정 함수 
        videoln = v;                    //v로 초기화
    }                                   //함수 끝 

    bool WideTV::getVideoln() {         //반환 함수 
        return videoln;                 //반환 
    }                                   //함수 끝 
    SmartTV::SmartTV() : ipAddr("0.0.0.0") {    //생성자 
        cout << "SmartTV 생성" << endl;     //메시지 출력 
    }                                       //생성자 끝 

    void SmartTV::setipAddr(string ip) {    //ip 주소 설정
        ipAddr = ip;                        //전달받은 주소 저장 
    }                                       //함수 끝 

    string SmartTV::getIpAddr() {           //ip 주소 반환 
        return ipAddr;                      //주소 반환 
    }                                       //함수 끝 

    void SmartTV::setSmartTV(int size, bool videoln, string ipAddr) {   //모든 속성 설정 
        setSize(size);                      //크기 설정 함수 호출 
        setVideoln(videoln);                //설정 함수 호출 
        setipAddr(ipAddr);                  //설정 함수 호출 
    }                                       //함수 끝
