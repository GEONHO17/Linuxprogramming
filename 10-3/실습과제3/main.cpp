#include <vector>       //vector를 사용하기위한 헤더파일 포함 
#include <iostream>		//입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임 스페이스 이름공간에 std 생략 
string lowstr(const string& a) {	//문자열을 소문자로 변환하는 함수 
    string result =a;				//결과값 
    for (size_t i = 0; i < result.size(); i++) {	  
        if (result[i] >= 'A' && result[i] <= 'Z') {	//대문자 인경우 
            result[i] = result[i] + ('a' - 'A'); // 대문자를 소문자로 변환
        }
    }
    return result;					//결과값 반환 
}	
int main() {				//메인함수 
	vector<string> str;   // 문자열을 저장할 vector
	string ch;				//변수 선언 
	for (size_t i = 0; i < 5; i++) {
		cout << "문자열을 입력하세요: ";	//메시지 출력 
		cin >>ch ;			//입력받은 문자열로 초기화 
		str.push_back(ch);	//백터에 저장 
	}

	string maxstr = str.at(0);          //최대값 초기화
	string lowword = lowstr(maxstr);	//소문자로 변환후 저장     

	for (size_t i = 1; i < str.size(); i++) {      
		string change = lowstr(str.at(i)); //소문자로 변환 
		if (change > lowword) {          // 사전순 비교
			maxstr = str.at(i);                     //최대값으로 저장 
			lowword = change;				//소문자 문자열 저장 
		}
	}
	cout << "사전에서 제일 뒤에 나오는 단어는 " << maxstr << "입니다" << endl; //메시지 출력 

	return 0; //0을 반환하고 함수종료 
}
