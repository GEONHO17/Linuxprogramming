#include <iostream>  //표준 입출력을 제공하는 헤더파일 포함 
using namespace std;	//네임스페이스 이름공간에 std 생략 
#include <vector>        // vector를 사용하기 위한 헤더파일 포함

int main() {			//메인함수 
	vector<vector<int>> rc = { {-5,2,35},{-20,5,100},{-75,5,-25} };	//벡터선언후 초기화
	int max = rc.at(0).at(0);			//최대값을 저장할 변수 
	int countCol = 0;		//열 위치를 저장할 변수	
	int countRow = 0;		//행 위치를 저장할 변수 
	for (int i = 0; i < rc.size(); i++) {	//3회 반복문 
		for (int j = 0; j < rc.at(i).size(); j++) {	//3회반복문 
			if (max < rc.at(i).at(j)) {		//max값이 더작으면 
				max = rc.at(i).at(j);		//더 큰 값으로 max 설정 
				countCol = j;		//열 위치
				countRow = i;		//행 위치 
			}
		}
	}
	cout << "최대값은 " << max << endl;	//메시지 출력 
	cout << "위치는 " << countRow + 1 << "행" << countCol + 1 << "열";	//메시지 출력 
	return 0;		//0을 반환하고 함수 종료 
}
