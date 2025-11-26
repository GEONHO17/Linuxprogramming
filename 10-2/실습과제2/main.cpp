#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략 
template <class T>      //클래스 생성 
class Container {       //클래스 정의 
    T* p;                        //동적 배열 포인터 
    int size;                    // 배열 크기 
public:                         //접근 지정자 
    Container(int n) {           //생성자
        size = n;               //n으로 초기화
        p = new T[n];           //동적 배열 생성 
    }
    ~Container() {              //소멸자
        delete[] p;             //메모리 반환 
    }  
    void set(int index, T value) { p[index] = value; }//값 저장하는 함수 
    T get(int index) {          //값을 반환하는 함수 
        return p[index];        //값 반환 
    }
};                          
int main() {                    //메인함수 
    Container<char> c(26);       //객체 생성 
    for (int i = 0; i < 26; i++)
        c.set(i, 'a' + i);       //순서대로 배열에 저장 
    for (int i = 25; i >= 0; i--)
        cout << c.get(i);        //배열에 저장된 값을 뒤에서 부터 출력 
    cout << endl;                //줄 바꿈 
    return 0;                    //0을 반환하고 함수 종료 
}                               //함수 끝 
