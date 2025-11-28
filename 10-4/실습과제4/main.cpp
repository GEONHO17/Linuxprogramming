#include <algorithm>		//알고리즘을 사용하기위한 헤더파일 포함 
#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략
class Student {			//클래스 정의 
	int grd;			//변수 선언 
	string name;		//변수 선언 
public:					//접근 지정자 
	Student(string n, int h) {	//생성자 
		grd = h;		//입력받은 값으로 초기화 
		name = n;
	}		//입력받은 값으로 초기화
	int getGrd() { return grd; }	//성적 반환 
	string getName() { return name; }	//이름 반환 
	bool operator<(const Student& other) const {	
		return grd < other.grd;	//성적비교 
	}
};
int main() {			//메인함수 
	vector<Student> st;			//객체 생성 
	for (int i = 0; i < 3; i++) {	//3회 반복 
		int n;						//변수 선언 
		string h;					//변수 선언 
		cout << "이름과 성적을 입력: ";	//메시지 출력 
		cin >>h >>n;					//입력받은 값 저장 
		st.push_back(Student(h,n));	//벡터 배열에 정수와 문자열 삽입 
	}
	vector<Student>::iterator it;	//iteratro 객체 생성 

	it = max_element(st.begin(), st.end());	//최대값 구하기 
	cout << "최우수학생은\n";				//메시지 출력 
	cout << "이름: " << it->getName() << endl;	//메시지 출력 
	cout << "성적: " << it->getGrd() << "점\n";	//메시지 출력 
}						
