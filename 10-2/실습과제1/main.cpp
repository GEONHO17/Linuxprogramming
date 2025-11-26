#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략 
template <class T1, class T2>	//탬플릿 클래스 생성
class GClass {					//클래스 정의
	T1 data1;					//첫 번째 값 
	T2 data2;					//두 번째 값 
public:							//접근 지정자 
	GClass() {					//기본 생성자 
		data1 = 0; data2 = 0;	//두값을 0으로 초기화
	}	
	void set(T1 a, T2 b) {		//객체에 값을 저장하는 함수 
		data1 = a; data2 = b;	//각각 a,b로 초기화
	}
	void get(T1& a, T2& b) {	//참조로 반환하는 함수 
		a = data1; b = data2;	//외부 변수에 대입 
	}
	void swap() {				//두 값을 교환하는 함수 
		T1 tmp = data1;			//data1의 값을 저장 
		data1 = data2;			//data2 값을 data1 에 복사
		data2 = tmp;			//tmp 값을 data2에 복사
	}
};
int main() {					//메인함수 
	int a, b;					//변수 선언 
	GClass<int, int> x;			//객체 생성 
	x.set(2, 5);				//값 저장 
	x.get(a, b);				//저장된 값 
	cout << "a=" << a << '\t' << "b=" << b << endl;	//메시지 출력 
	x.swap();					//교환 함수 호출 
	x.get(a, b);				//교환 한 값 
	cout << "a=" << a << '\t' << "b=" << b << endl;	//메시지 출력 
	double c, d;				//변수 선언 
	GClass<double, double> y;	//객체 생성 
	y.set(3.14, 6.28);			//값 저장 
	y.get(c, d);				//저장된 값 
	cout << "c=" << c << '\t' << "d=" << d << endl;	//메시지 출력 
	y.swap();					//교환 함수 호출 
	y.get(c, d);				//교환 한 값 
	cout << "c=" << c << '\t' << "d=" << d << endl;	//메시지 출력 
}
