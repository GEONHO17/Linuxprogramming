#include <iostream>  //표준 입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임스페이스 이름공간에 std 생략 
int main() {			//메인함수 
	int rc[3][3] = { {-5,2,35},{-20,5,100},{-75,5,-25} };	//배열선언후 초기화
	for (int i = 0; i < 3; i++) {			//3회 반복문 
		for (int j = 0; j < 3; j++) {		//3회 반복문 
			if (rc[i][j] < 0)				//값이 음수면 
				rc[i][j] = 0;				//0으로 설정 
			else                            //값이 양수이면 
				rc[i][j] = 255;				//255로 설정 
		}
	}
	cout << "수정행렬:\n";      //메시지 출력 
	for (int i = 0; i < 3; i++) {       //3회반복문 
		for (int j = 0; j < 3; j++) {   //3회 반복문 
			cout << rc[i][j] << " ";     //행렬값 출력 
		}
		cout << endl;           //줄바꿈
	}
	return 0;	//0을 반환하고 함수 종료
}
